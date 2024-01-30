@class NSMutableSet, PXGMetalRenderContext, NSMutableArray;

@interface PXGColorProgramLibrary : NSObject {
    NSMutableArray *_programs;
    NSMutableSet *_failedColorspaces;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) PXGMetalRenderContext *metalRenderContext;
@property (readonly, nonatomic) struct CGColorSpace { } *destinationColorSpace;

- (void)dealloc;
- (id)init;
- (id)description;
- (id)colorProgramForSourceColorSpace:(struct CGColorSpace { } *)a0 flags:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 destinationColorSpace:(struct CGColorSpace { } *)a1;

@end
