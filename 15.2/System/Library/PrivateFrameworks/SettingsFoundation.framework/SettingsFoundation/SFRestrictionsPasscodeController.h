@interface SFRestrictionsPasscodeController : NSObject

+ (void)setPIN:(id)a0;
+ (BOOL)hasHashAndSaltLegacyPassword;
+ (void)migrateRestrictionsPasscode;
+ (void)_migrateRestrictionsPasscodeIfNeeded;
+ (id)pinFromHashAndSaltLegacyPassword;
+ (void)removePasswordForHashAndSaltLegacyRestrictions;
+ (id)_keychainPasswordForRestrictions;
+ (id)saltForHashAndSaltLegacyRestrictions;
+ (BOOL)settingEnabled;
+ (id)_generateSalt;
+ (BOOL)validatePIN:(id)a0;
+ (id)hashForHashAndSaltLegacyRestrictions;
+ (void)_removeKeychainPasswordForRestrictions;
+ (BOOL)legacyRestrictionsInEffect;
+ (id)newHashDataForPassword:(id)a0 andSalt:(id)a1;
+ (void)_setKeychainPasswordForRestrictions:(id)a0;

@end
