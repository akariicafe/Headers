@class NSMutableArray, NSMutableSet;
@protocol MTLDevice;

@interface PXGColorProgramLibrary : NSObject {
    NSMutableArray *_programs;
    NSMutableSet *_failedColorspaces;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) struct CGColorSpace { } *destinationColorSpace;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)colorProgramForSourceColorSpace:(struct CGColorSpace { } *)a0 flags:(unsigned long long)a1;
- (id)description;
- (id)initWithDevice:(id)a0 destinationColorSpace:(struct CGColorSpace { } *)a1;

@end
