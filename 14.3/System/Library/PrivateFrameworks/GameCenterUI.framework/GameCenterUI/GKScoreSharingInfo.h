@class GKGame, GKPlayer, UIImage, GKLeaderboard, GKScore;

@interface GKScoreSharingInfo : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GKLeaderboard *leaderboardCategory;
@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) GKGame *game;
@property (retain, nonatomic) UIImage *badgeImage;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL complete;
@property (retain, nonatomic) GKScore *score;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)operationThatBlocksUntilLoaded;
- (id)thumbnailForActivityType:(id)a0;
- (id)itemsForActivityType:(id)a0;
- (id)subjectForEmailActivity;
- (id)initWithCategoryID:(id)a0 forGame:(id)a1 player:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
