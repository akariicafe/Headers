@class AAUIAchievementResourceProvider, NSMutableDictionary, NSObject, AAUIBadgeView;
@protocol OS_dispatch_queue;

@interface AAUIBadgeImageFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) AAUIAchievementResourceProvider *resourceProvider;
@property (retain, nonatomic) AAUIBadgeView *earnedBadgeView;
@property (retain, nonatomic) AAUIBadgeView *unearnedBadgeView;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageCreationQueue;

- (id)init;
- (void).cxx_destruct;
- (void)clearAllCachedImages;
- (id)generateImageForConfiguration:(id)a0 size:(struct CGSize { double x0; double x1; })a1 unearned:(BOOL)a2;
- (id)thumbnailImageForAchievement:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)hasCachedThumbnailImageForAchievement:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
