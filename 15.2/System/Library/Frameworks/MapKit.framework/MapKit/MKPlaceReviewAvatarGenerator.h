@class NSObject, NSMutableDictionary, CNAvatarImageRenderer;
@protocol OS_dispatch_queue, MKInfoCardTheme;

@interface MKPlaceReviewAvatarGenerator : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_cachedMaskedImages;
}

@property (retain, nonatomic) CNAvatarImageRenderer *monogrammer;
@property (weak, nonatomic) id<MKInfoCardTheme> theme;

- (void)monogramForReviewerName:(id)a0 pointSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)avatarForReview:(id)a0 pointSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;

@end
