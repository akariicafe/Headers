@interface SBSFocusModesHomeScreenSettingsService : NSObject

+ (id)activateConnection;
+ (void)addSuggestedHomeScreenPageWithRequest:(id)a0;
+ (void)homeScreenSnapshotsForSuggestedPagesWithRequest:(id)a0 completion:(id /* block */)a1;
+ (void)homeScreenSnapshotsWithRequest:(id)a0 completion:(id /* block */)a1;
+ (void)updateFocusModeHomeScreenSettingsWithRequest:(id)a0;

@end
