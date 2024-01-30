@interface PUReviewAssetAnimatedImageMediaRequest : NSObject <PUReviewAssetCancelableMediaRequest>

@property (readonly, nonatomic) long long _animatedRequestID;

- (id)initWithAnimatedImageRequestID:(long long)a0;
- (void)cancelRequest;

@end
