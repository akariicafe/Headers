@class UIFont;

@interface ASCompetitionScoreViewConfiguration : NSObject

@property (retain, nonatomic) UIFont *headerFont;
@property (nonatomic) double headerBaselineOffset;
@property (nonatomic) BOOL showsScoreTypeHeader;
@property (retain, nonatomic) UIFont *nameFont;
@property (nonatomic) double nameBaselineOffset;
@property (nonatomic) BOOL showsNames;
@property (nonatomic) BOOL uppercaseNames;
@property (nonatomic) long long primaryScoreSource;
@property (retain, nonatomic) UIFont *primaryScoreFont;
@property (retain, nonatomic) UIFont *primaryScoreUnitFont;
@property (nonatomic) double primaryScoreBaselineOffset;
@property (nonatomic) BOOL showsPrimaryScoreUnits;
@property (nonatomic) BOOL zeroPadPrimaryScore;
@property (nonatomic) double achievementThumbnailTopMargin;
@property (nonatomic) struct CGSize { double width; double height; } achievementThumbnailSize;
@property (nonatomic) BOOL showsAchievementThumbnail;
@property (nonatomic) long long achievementThumbnailAlignment;
@property (nonatomic) long long achievementThumbnailQuality;
@property (retain, nonatomic) UIFont *secondaryScoreFont;
@property (nonatomic) double secondaryScoreBaselineOffset;
@property (nonatomic) BOOL showsTodaySecondaryScore;
@property (nonatomic) long long alignment;
@property (nonatomic) long long division;
@property (nonatomic) double sideMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double minimumMiddleMargin;
@property (nonatomic) double opponentScoreViewWidth;
@property (nonatomic) BOOL wantsScaledBaselineAlignment;

+ (id)companionFriendListConfiguration;
+ (id)companionTotalScoreFriendDetailConfiguration;
+ (id)companionTotalWinsFriendDetailConfiguration;
+ (id)companionTotalWinsStandaloneFriendDetailConfiguration;
+ (id)gizmoTodayScoreConfiguration;
+ (id)gizmoTotalScoreConfiguration;
+ (id)gizmoTotalScoreFriendDetailConfiguration;
+ (id)gizmoTotalWinsConfiguration;
+ (id)gizmoTotalWinsStandaloneConfiguration;

- (void).cxx_destruct;

@end
