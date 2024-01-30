@class NSMutableArray, AVCaptureDeferredPhotoProxy;

@interface AVCaptureDeferredPhotoProcessingRequest : NSObject

@property (readonly) NSMutableArray *delegatesStorage;
@property (readonly) AVCaptureDeferredPhotoProxy *photoProxy;
@property (nonatomic) unsigned int firedCallbackFlags;

- (void)addDelegate:(id)a0;
- (void)dealloc;
- (id)initWithDelegate:(id)a0 photoProxy:(id)a1;

@end
