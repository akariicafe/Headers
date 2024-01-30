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

+ (void)load;

- (id)init;
- (void).cxx_destruct;
- (void)_toggle;
- (id)title;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (void)_updateAppsToBringUpFromPreferences;

@end
