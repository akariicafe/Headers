@class NSString, NSDictionary;

@interface GKContentPropertyList : NSObject {
    NSDictionary *_achievementsByIdentifier;
    NSDictionary *_leaderboardsByIdentifier;
    NSDictionary *_leaderboardSetsByIdentifier;
}

@property (retain) NSString *bundleID;
@property (retain) NSDictionary *root;

+ (id)localPropertyListForGameDescriptor:(id)a0;

- (id)localizedStringForKey:(id)a0;
- (void).cxx_destruct;
- (id)_rootDictionary;
- (id)_mainBundle;
- (id)achievementDescriptionForIdentifier:(id)a0;
- (id)achievementDescriptions;
- (id)imageNameForDashboardLogo;
- (id)leaderboardDescriptionForIdentifier:(id)a0;
- (id)leaderboardDescriptions;
- (id)leaderboardSetDescriptionForIdentifier:(id)a0;
- (id)leaderboardSetDescriptions;
- (id)localizedStringForKey:(id)a0 forLocalization:(id)a1;

@end
