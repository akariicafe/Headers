@interface SFRestrictionsPasscodeController : NSObject

+ (BOOL)settingEnabled;
+ (id)pinFromHashAndSaltLegacyPassword;
+ (BOOL)hasHashAndSaltLegacyPassword;
+ (void)migrateRestrictionsPasscode;
+ (id)_keychainPasswordForRestrictions;
+ (id)saltForHashAndSaltLegacyRestrictions;
+ (id)newHashDataForPassword:(id)a0 andSalt:(id)a1;
+ (BOOL)validatePIN:(id)a0;
+ (id)hashForHashAndSaltLegacyRestrictions;
+ (void)_removeKeychainPasswordForRestrictions;
+ (void)setPIN:(id)a0;
+ (void)_setKeychainPasswordForRestrictions:(id)a0;
+ (void)removePasswordForHashAndSaltLegacyRestrictions;
+ (id)_generateSalt;
+ (void)_migrateRestrictionsPasscodeIfNeeded;
+ (BOOL)legacyRestrictionsInEffect;

@end
