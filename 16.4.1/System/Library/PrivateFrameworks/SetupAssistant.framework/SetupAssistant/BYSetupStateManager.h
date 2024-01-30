@interface BYSetupStateManager : NSObject

+ (id)sharedManager;

- (id)buddyPrefsValueForKey:(id)a0;
- (void)clearRestoreType;
- (BOOL)didRestoreFromBackup;
- (BOOL)didSetupUsingiTunes;
- (void)recordSetupUsingBuddy;
- (long long)restoreType;

@end
