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
- (id)init;
- (void).cxx_destruct;
- (id)secondaryLabelCompositingFilter;
- (id)placeholderSourceWithDimension:(long long)a0;
- (id)achievementsDefaultIcon;
- (id)achievementsNotStartedIcon;
- (id)avatarSourceWithDimension:(long long)a0;
- (void)clearResourceCache;
- (id)defaultPlayerPhoto;
- (id)eventIconImage;
- (id)groupImageSourceWithDimension:(long long)a0;
- (id)messagesInviteBackgroundImage;
- (id)monogramSourceWithDimension:(long long)a0;
- (id)playerPickerSelectedImage;
- (id)playerPickerUnselectedImage;
- (id)statusDotImage;
- (id)defaultLeaderboardIcon;
- (id)navbarActionButtonIcon;
- (id)removePlayerButtonImage;
- (id)resourceForSelector:(SEL)a0 missingHandler:(id /* block */)a1;
- (id)resourceWithName:(id)a0 missingHandler:(id /* block */)a1;

@end
