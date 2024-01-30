@interface BYSetupStateManager : NSObject

+ (id)sharedManager;

- (BOOL)didRestoreFromBackup;
- (id)buddyPrefsValueForKey:(id)a0;
- (long long)restoreType;
- (void)clearRestoreType;
- (BOOL)didSetupUsingiTunes;
- (void)recordSetupUsingBuddy;

@end
