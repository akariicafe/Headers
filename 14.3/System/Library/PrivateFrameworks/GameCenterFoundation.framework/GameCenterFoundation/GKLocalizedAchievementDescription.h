@class NSString, GKGame;

@interface GKLocalizedAchievementDescription : GKAchievementDescription

@property (retain) GKGame *game;
@property (copy) NSString *iconImageName;

- (void)dealloc;
- (id)achievedDescription;
- (id)unachievedDescription;
- (id)imageNameForIcon;
- (id)title;
- (id)_localizedStringFromKey:(id)a0;

@end
