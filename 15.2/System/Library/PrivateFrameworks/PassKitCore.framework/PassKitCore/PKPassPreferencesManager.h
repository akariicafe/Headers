@interface PKPassPreferencesManager : NSObject

+ (id)sharedInstance;

- (void)_synchronize;
- (void)removeAllPreferences;
- (void)_removeValueForKey:(id)a0 passUniqueID:(id)a1;
- (struct __CFString { } *)_cfPreferencesKeyForConstant:(id)a0 passUniqueID:(id)a1;
- (void)removeAllPreferencesForPassWithUniqueID:(id)a0;
- (void)setHasDoneExpressUpgrade:(BOOL)a0;
- (BOOL)hasDoneExpressUpgrade;
- (void)_setDouble:(double)a0 forKey:(id)a1 passUniqueID:(id)a2;
- (double)_doubleForKey:(id)a0 passUniqueID:(id)a1;
- (void)_setDecimalNumber:(id)a0 forKey:(id)a1 passUniqueID:(id)a2;
- (id)_decimalNumberForKey:(id)a0 passUniqueID:(id)a1;
- (void)_setString:(id)a0 forKey:(id)a1 passUniqueID:(id)a2;
- (id)_stringForKey:(id)a0 passUniqueID:(id)a1;
- (id)lowBalanceReminderAmountForPassWithUniqueID:(id)a0;
- (double)commutePlanRenewalReminderTimeIntervalForPassWithUniqueID:(id)a0;

@end
