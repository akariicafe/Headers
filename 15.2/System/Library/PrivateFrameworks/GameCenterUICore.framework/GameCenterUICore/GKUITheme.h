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

- (id)imageNamed:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)avatarSourceWithDimension:(long long)a0;
- (id)monogramSourceWithDimension:(long long)a0;
- (id)statusDotImage;
- (void)clearResourceCache;
- (id)messagesInviteBackgroundImage;
- (id)eventIconImage;
- (id)achievementsNotStartedIcon;
- (id)achievementsDefaultIcon;
- (id)placeholderSourceWithDimension:(long long)a0;
- (id)defaultPlayerPhoto;
- (id)groupImageSourceWithDimension:(long long)a0;
- (id)playerPickerSelectedImage;
- (id)playerPickerUnselectedImage;
- (id)resourceWithName:(id)a0 missingHandler:(id /* block */)a1;
- (id)resourceForSelector:(SEL)a0 missingHandler:(id /* block */)a1;
- (id)defaultLeaderboardIcon;
- (id)removePlayerButtonImage;
- (id)navbarActionButtonIcon;

@end
