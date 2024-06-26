@interface ICCryptor : NSObject

+ (id)decryptWithMainKeyOfObject:(id)a0 decryptablePreparationBlock:(id /* block */)a1 fallbackAttemptSuccessCleanupHandler:(id /* block */)a2;
+ (id)decryptWithMainKeyOfObject:(id)a0 decryptable:(id)a1 fallbackAttemptSuccessCleanupHandler:(id /* block */)a2;
+ (BOOL)isAuthenticatedForNote:(id)a0;
+ (void)encryptWithMainKeyOfObject:(id)a0 dataToEncrypt:(id)a1 failureHandler:(id /* block */)a2 successHandler:(id /* block */)a3;
+ (BOOL)isAuthenticatedForObject:(id)a0;
+ (id)decryptData:(id)a0 forObject:(id)a1;
+ (id)cachedMainKeyForObject:(id)a0;
+ (id)wrapKey:(id)a0 withMainKey:(id)a1;
+ (id)unwrappedKeyForObject:(id)a0;
+ (void)encryptWithMainKeyOfObject:(id)a0 dataPreparationBlock:(id /* block */)a1 failureHandler:(id /* block */)a2 successHandler:(id /* block */)a3;
+ (BOOL)userHasPassphraseSetForObject:(id)a0;
+ (BOOL)key:(id)a0 decryptsObject:(id)a1;
+ (BOOL)isPassphrase:(id)a0 correctForObject:(id)a1;
+ (void)cacheMainKeyWithPassphrase:(id)a0 forAccount:(id)a1;
+ (void)cacheMainKeyWithPassphrase:(id)a0 forObject:(id)a1;
+ (BOOL)userHasPassphraseSetForNote:(id)a0;
+ (void)cacheMainKeyWithPassphrase:(id)a0 forNote:(id)a1;
+ (BOOL)isPassphrase:(id)a0 correctForAccount:(id)a1;
+ (BOOL)unauthenticatedAttachmentsUsingSamePassphraseExistForNote:(id)a0 passphrase:(id)a1;
+ (void)fixDivergedAttachmentsForNote:(id)a0 usingPassphrase:(id)a1;
+ (void)fixUpAnyNotesToMatchAccountUsingPassphraseIfNecessary:(id)a0;
+ (void)fixUpAnyNotesToMatchAccountUsingPassphrase:(id)a0;
+ (BOOL)isPassphrase:(id)a0 correctForNote:(id)a1;
+ (void)fixNoteWithDivergedKeyFromAccountPassphrase:(id)a0 usingPassphrase:(id)a1;
+ (BOOL)isPassphrase:(id)a0 correctForObject:(id)a1 usingKeysFromObject:(id)a2;
+ (BOOL)authenticateWithPassphrase:(id)a0 forAccount:(id)a1;
+ (BOOL)authenticateWithPassphrase:(id)a0 forObject:(id)a1;
+ (BOOL)isAuthenticatedForAccount:(id)a0;
+ (void)rewrapNote:(id)a0 newMainKey:(id)a1 salt:(id)a2 iterationCount:(unsigned int)a3 hint:(id)a4;
+ (void)setCachedMainKey:(id)a0 forObject:(id)a1;
+ (id)mainKeysByAccountIdentifier;
+ (void)startOrExtendCachedKeyClearingTimer;
+ (void)setCachedMainKey:(id)a0 forIdentifier:(id)a1 bioAuthAccountID:(id)a2;
+ (id)cachedMainKeyForIdentifier:(id)a0;
+ (id)allCachedKeys;
+ (void)refaultAllPasswordProtectedObjects;
+ (BOOL)setPassphrase:(id)a0 hint:(id)a1 forAccount:(id)a2;
+ (BOOL)authenticateWithPassphrase:(id)a0 forNote:(id)a1;
+ (void)rewrapKeyForObject:(id)a0 newMainKey:(id)a1 salt:(id)a2 iterationCount:(unsigned int)a3 hint:(id)a4;
+ (void)startOrExtendCachedKeyClearingTimerForModes:(id)a0;
+ (void)clearAllCachedMainKeys;
+ (id)newWrappedKeyForObject:(id)a0;
+ (id)decryptedDataFromFileURL:(id)a0 forObject:(id)a1;
+ (BOOL)encryptFileFromURL:(id)a0 toURL:(id)a1 forObject:(id)a2;
+ (BOOL)userHasPassphraseSetForAccount:(id)a0;
+ (void)cacheMainKeyWithPassphrase:(id)a0;
+ (BOOL)hasAnyCachedMainKeys;
+ (BOOL)setPassphrase:(id)a0 hint:(id)a1 oldPassphrase:(id)a2 forAccount:(id)a3;
+ (BOOL)updateAllNotesWithOldPassphrase:(id)a0 toAccountPassphrase:(id)a1 fromAccount:(id)a2 progress:(id)a3;
+ (void)transferSharedPassphraseFromAccount:(id)a0 toAccount:(id)a1;
+ (double)timeIntervalBeforeClearingCachedKeys;
+ (void)cachedKeyClearingTimerDidFire;
+ (void)rewrapAndDivergeKeyForObject:(id)a0 usingPassphrase:(id)a1;
+ (id)dataFromHexString:(id)a0;

@end
