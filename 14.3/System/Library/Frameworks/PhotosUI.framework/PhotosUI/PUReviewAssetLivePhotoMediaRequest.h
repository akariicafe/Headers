@interface PUReviewAssetLivePhotoMediaRequest : NSObject <PUReviewAssetCancelableMediaRequest>

@property (readonly, nonatomic) int _liveRequestID;

- (id)initLivePhotoRequestID:(int)a0;
- (void)cancelRequest;

@end
