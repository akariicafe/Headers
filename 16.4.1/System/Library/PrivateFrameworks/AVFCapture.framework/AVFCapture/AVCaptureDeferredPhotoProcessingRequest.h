@class NSMutableArray, AVCaptureDeferredPhotoProxy;

@interface AVCaptureDeferredPhotoProcessingRequest : NSObject

@property (readonly) NSMutableArray *delegatesStorage;
@property (readonly) AVCaptureDeferredPhotoProxy *photoProxy;
@property (nonatomic) unsigned int firedCallbackFlags;

- (void)dealloc;
- (void)addDelegate:(id)a0;
- (id)initWithDelegate:(id)a0 photoProxy:(id)a1;

@end
