@class NSObject, NSMutableDictionary, CNAvatarImageRenderer;
@protocol OS_dispatch_queue, MKInfoCardTheme;

@interface MKPlaceReviewAvatarGenerator : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_cachedMaskedImages;
}

@property (retain, nonatomic) CNAvatarImageRenderer *monogrammer;
@property (weak, nonatomic) id<MKInfoCardTheme> theme;

- (id)init;
- (void).cxx_destruct;
- (void)monogramForReviewerName:(id)a0 completion:(id /* block */)a1;
- (void)avatarForReview:(id)a0 completion:(id /* block */)a1;

@end
