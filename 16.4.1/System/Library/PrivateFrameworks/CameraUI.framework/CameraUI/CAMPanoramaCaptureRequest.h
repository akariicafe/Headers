@protocol CAMPanoramaCaptureRequestDelegate;

@interface CAMPanoramaCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) double loggingVideoZoomFactor;
@property (readonly, nonatomic) long long loggingZoomInteractionType;
@property (readonly, weak, nonatomic) id<CAMPanoramaCaptureRequestDelegate> delegate;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequest:(id)a0 distinctPersistence:(BOOL)a1 includeAnalytics:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
