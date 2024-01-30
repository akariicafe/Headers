@class NSCache, GKNetworkImageSource, UIImage;

@interface GKUITheme : NSObject

@property (retain, nonatomic) NSCache *resourceCache;
@property (readonly, retain, nonatomic) GKNetworkImageSource *macGameIconSource;
@property (readonly, retain, nonatomic) GKNetworkImageSource *photoListSource;
@property (readonly, retain, nonatomic) GKNetworkImageSource *photoDetailSource;
@property (readonly, retain, nonatomic) GKNetworkImageSource *iconLeaderboardListSource;
@property (readonly, retain, nonatomic) GKNetworkImageSource *iconLeaderboardSetListSource;
@property (readonly, nonatomic) GKNetworkImageSource *untreatedAchievementImageSource;
@property (readonly, nonatomic) GKNetworkImageSource *untreatedAchievementImageDetailSource;
@property (readonly, retain, nonatomic) UIImage *ratingStarsBackgroundImage;
@property (readonly, retain, nonatomic) UIImage *ratingStarsForegroundImage;
@property (readonly, retain, nonatomic) UIImage *interactiveRatingStarsForeground;
@property (readonly, retain, nonatomic) UIImage *interactiveRatingStarsBackground;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } formSheetSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } authenticateExtensionFormSheetSize;
@property (readonly, nonatomic) double formSheetCornerRadius;

+ (id)sharedTheme;

- (id)init;
- (id)monogramSourceWithDimension:(long long)a0;
- (id)imageNamed:(id)a0;
- (void).cxx_destruct;
- (void)clearResourceCache;
- (id)placeholderSourceWithDimension:(long long)a0;
- (id)messagesInviteBackgroundImage;
- (id)playerPickerSelectedImage;
- (id)playerPickerUnselectedImage;
- (id)eventIconImage;
- (id)achievementsNotStartedIcon;
- (id)achievementsDefaultIcon;
- (id)defaultPlayerPhoto;
- (id)avatarSourceWithDimension:(long long)a0;
- (id)statusDotImage;
- (id)resourceWithName:(id)a0 missingHandler:(id /* block */)a1;
- (id)resourceForSelector:(SEL)a0 missingHandler:(id /* block */)a1;
- (id)defaultLeaderboardIcon;
- (id)removePlayerButtonImage;
- (id)navbarActionButtonIcon;

@end
