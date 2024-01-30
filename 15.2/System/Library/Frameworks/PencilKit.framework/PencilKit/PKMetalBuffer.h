@class NSString;
@protocol MTLBuffer;

@interface PKMetalBuffer : NSObject <PKMetalResource> {
    unsigned long long _lockCount;
    _Atomic int _isPurged;
    id<MTLBuffer> _metalBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
