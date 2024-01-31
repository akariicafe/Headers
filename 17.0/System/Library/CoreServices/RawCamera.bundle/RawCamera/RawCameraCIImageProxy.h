@class CIImage;

@interface RawCameraCIImageProxy : NSProxy

@property struct shared_ptr<CRawImage> { struct CRawImage *__ptr_; struct __shared_weak_count *__cntrl_; } rawImage;
@property (retain) CIImage *ciImage;

+ (BOOL)respondsToSelector:(SEL)a0;

- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id).cxx_construct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithRawImage:(struct shared_ptr<CRawImage> { struct CRawImage *x0; struct __shared_weak_count *x1; })a0;
- (id)proxyedObject;

@end
