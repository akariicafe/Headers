@interface ICCryptor : NSObject

+ (id)cachedMasterKeyForObject:(id)a0;
+ (void)setCachedMasterKey:(id)a0 forObject:(id)a1;
+ (id)wrapKey:(id)a0 withMasterKey:(id)a1;
+ (id)decryptedDataFromFileURL:(id)a0 forObject:(id)a1;
+ (BOOL)key:(id)a0 decryptsObject:(id)a1;
+ (id)unwrappedKeyForObject:(id)a0;
+ (BOOL)userHasPassphraseSetForObject:(id)a0;
+ (BOOL)isPassphrase:(id)a0 correctForObject:(id)a1;
+ (void)cacheMasterKeyWithPassphrase:(id)a0 forAccount:(id)a1;
+ (void)cacheMasterKeyWithPassphrase:(id)a0 forObject:(id)a1;
+ (BOOL)userHasPassphraseSetForNote:(id)a0;
+ (void)cacheMasterKeyWithPassphrase:(id)a0 forNote:(id)a1;
+ (BOOL)isPassphrase:(id)a0 correctForAccount:(id)a1;
+ (BOOL)unauthenticatedAttachmentsUsingSamePassphraseExistForNote:(id)a0 passphrase:(id)a1;
+ (void)fixDivergedAttachmentsForNote:(id)a0 usingPassphrase:(id)a1;
+ (void)fixUpAnyNotesToMatchAccountUsingPassphrase:(id)a0;
+ (BOOL)isAuthenticatedForNote:(id)a0;
+ (void)fixUpAnyNotesToMatchAccountUsingPassphraseIfNecessary:(id)a0;
+ (BOOL)isPassphrase:(id)a0 correctForNote:(id)a1;
+ (void)fixNoteWithDivergedKeyFromAccountPassphrase:(id)a0 usingPassphrase:(id)a1;
+ (BOOL)authenticateWithPassphrase:(id)a0 forAccount:(id)a1;
+ (BOOL)authenticateWithPassphrase:(id)a0 forObject:(id)a1;
+ (BOOL)isAuthenticatedForAccount:(id)a0;
+ (void)rewrapNote:(id)a0 newMasterKey:(id)a1 salt:(id)a2 iterationCount:(unsigned int)a3 hint:(id)a4;
+ (id)masterKeysByAccountIdentifier;
+ (void)startOrExtendCachedKeyClearingTimer;
+ (id)allCachedKeys;
+ (void)setCachedMasterKey:(id)a0 forIdentifier:(id)a1 bioAuthAccountID:(id)a2;
+ (id)cachedMasterKeyForIdentifier:(id)a0;
+ (void)refaultAllPasswordProtectedObjects;
+ (BOOL)setPassphrase:(id)a0 hint:(id)a1 forAccount:(id)a2;
+ (BOOL)authenticateWithPassphrase:(id)a0 forNote:(id)a1;
+ (void)rewrapKeyForObject:(id)a0 newMasterKey:(id)a1 salt:(id)a2 iterationCount:(unsigned int)a3 hint:(id)a4;
+ (void)startOrExtendCachedKeyClearingTimerForModes:(id)a0;
+ (void)clearAllCachedMasterKeys;
+ (BOOL)decryptFileFromURL:(id)a0 toURL:(id)a1 forObject:(id)a2;
+ (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1 forObject:(id)a2;
+ (BOOL)userHasPassphraseSetForAccount:(id)a0;
+ (void)cacheMasterKeyWithPassphrase:(id)a0;
+ (BOOL)hasAnyCachedMasterKeys;
+ (BOOL)setPassphrase:(id)a0 hint:(id)a1 oldPassphrase:(id)a2 forAccount:(id)a3;
+ (BOOL)updateAllNotesWithOldPassphrase:(id)a0 toAccountPassphrase:(id)a1 fromAccount:(id)a2 progress:(id)a3;
+ (void)transferSharedPassphraseFromAccount:(id)a0 toAccount:(id)a1;
+ (double)timeIntervalBeforeClearingCachedKeys;
+ (void)cachedKeyClearingTimerDidFire;
+ (void)removePassphraseForAccount:(id)a0;
+ (BOOL)isAuthenticatedForObject:(id)a0;
+ (id)decryptData:(id)a0 forObject:(id)a1;
+ (id)encryptData:(id)a0 forObject:(id)a1 tag:(id *)a2 initializationVector:(id *)a3;
+ (id)decryptData:(id)a0 forObject:(id)a1 withTag:(id)a2 initializationVector:(id)a3;
+ (id)newWrappedKeyForObject:(id)a0;
+ (void)removePassphraseForNotesInAccount:(id)a0;
+ (void)rewrapAndDivergeKeyForObject:(id)a0 usingPassphrase:(id)a1;

@end
