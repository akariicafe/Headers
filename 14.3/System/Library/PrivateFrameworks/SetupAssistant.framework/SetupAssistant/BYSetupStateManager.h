@interface BYSetupStateManager : NSObject

+ (id)sharedManager;

- (BOOL)didRestoreFromBackup;
- (long long)restoreType;
- (id)buddyPrefsValueForKey:(id)a0;
- (void)clearRestoreType;
- (BOOL)didSetupUsingiTunes;
- (void)recordSetupUsingBuddy;

@end
