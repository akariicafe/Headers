@protocol CAMPanoramaCaptureRequestDelegate;

@interface CAMPanoramaCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying>

@property (readonly, weak, nonatomic) id<CAMPanoramaCaptureRequestDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequest:(id)a0 distinctPersistence:(BOOL)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
