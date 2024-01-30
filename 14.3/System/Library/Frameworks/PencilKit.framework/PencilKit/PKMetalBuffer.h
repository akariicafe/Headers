@class NSString;
@protocol MTLBuffer;

@interface PKMetalBuffer : NSObject <PKMetalResource> {
    unsigned long long _lockCount;
    _Atomic int _isPurged;
}

@property (readonly, nonatomic) id<MTLBuffer> metalBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPurged;
- (void)unlock;
- (BOOL)lock;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 length:(unsigned long long)a1 bytes:(const void *)a2 options:(unsigned long long)a3;

@end
