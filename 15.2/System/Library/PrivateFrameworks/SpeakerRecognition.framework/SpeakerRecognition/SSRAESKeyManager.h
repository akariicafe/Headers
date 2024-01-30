@interface SSRAESKeyManager : NSObject

+ (id)getVoiceTriggerProfilesAESKey;
+ (id)generateIfNecessaryVoiceTriggerProfilesAESKey;
+ (id)generateIfNecessaryAESKeyWithKeySizeInBits:(unsigned long long)a0 applicationTag:(id)a1 keyLabel:(id)a2 shouldGenerateIfNecessary:(BOOL)a3;
+ (id)generateAESKeyWithKeySizeInBits:(unsigned long long)a0;
+ (BOOL)storeAESKeyInKeychain:(id)a0 applicationTag:(id)a1 keyLabel:(id)a2;
+ (id)getAESKeyFromKeychainWithApplicationTag:(id)a0 keyLabel:(id)a1;
+ (BOOL)deleteAESKeyWithApplicationTag:(id)a0 keyLabel:(id)a1;
+ (id)getKeychainAttributesForAESKeyWithApplicationTag:(id)a0 keyLabel:(id)a1;

@end
