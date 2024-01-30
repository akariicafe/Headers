@class NSObject, NSMutableDictionary, CNAvatarImageRenderer;
@protocol OS_dispatch_queue;

@interface MUPlaceReviewAvatarGenerator : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_cachedMaskedImages;
}

@property (retain, nonatomic) CNAvatarImageRenderer *monogrammer;

- (id)init;
- (void).cxx_destruct;
- (void)avatarForReview:(id)a0 pointSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)monogramForReviewerName:(id)a0 pointSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;

@end
