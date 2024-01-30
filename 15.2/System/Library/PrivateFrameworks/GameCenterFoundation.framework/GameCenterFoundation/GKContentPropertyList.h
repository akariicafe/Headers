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
- (id)_mainBundle;
- (void).cxx_destruct;
- (id)_rootDictionary;
- (id)achievementDescriptions;
- (id)achievementDescriptionForIdentifier:(id)a0;
- (id)localizedStringForKey:(id)a0 forLocalization:(id)a1;
- (id)imageNameForDashboardLogo;
- (id)leaderboardDescriptions;
- (id)leaderboardSetDescriptions;
- (id)leaderboardDescriptionForIdentifier:(id)a0;
- (id)leaderboardSetDescriptionForIdentifier:(id)a0;

@end
