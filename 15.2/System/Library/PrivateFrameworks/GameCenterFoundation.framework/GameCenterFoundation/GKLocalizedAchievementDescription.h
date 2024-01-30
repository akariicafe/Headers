@class NSString, GKGame;

@interface GKLocalizedAchievementDescription : GKAchievementDescription

@property (retain) GKGame *game;
@property (copy) NSString *iconImageName;

- (id)title;
- (void).cxx_destruct;
- (id)unachievedDescription;
- (id)achievedDescription;
- (id)imageNameForIcon;
- (id)_localizedStringFromKey:(id)a0;

@end
