@interface PUReviewAssetLivePhotoMediaRequest : NSObject <PUReviewAssetCancelableMediaRequest>

@property (readonly, nonatomic) int _liveRequestID;

- (void)cancelRequest;
- (id)initLivePhotoRequestID:(int)a0;

@end
