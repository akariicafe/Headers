@class FBApplicationUpdateScenesTransaction, NSString;

@interface SBMedusaAppsTestRecipe : NSObject <SBTestRecipe> {
    BOOL _activated;
    NSString *_leftTestBundleID;
    NSString *_rightTestBundleID;
}

@property (retain, nonatomic) FBApplicationUpdateScenesTransaction *currentTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;
- (id)title;
- (void).cxx_destruct;
- (void)_toggle;
- (void)_updateAppsToBringUpFromPreferences;

@end
