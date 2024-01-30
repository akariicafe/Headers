@interface DIEncryptionUnlocker : DIEncryptionFrontend

+ (BOOL)supportsSecureCoding;

- (id)CLIPassphrasePrompt;
- (id)GUIPassphraseLabel;
- (id)GUIPassphrasePrompt;
- (BOOL)keychainUnlockWithIsSystemKeychain:(BOOL)a0 error:(id *)a1;
- (BOOL)lookupLegacyKeychainWithXpcHandler:(id)a0 error:(id *)a1;
- (BOOL)keychainUnlockWithError:(id *)a0;
- (BOOL)unlockWithXpcHandler:(id)a0 error:(id *)a1;

@end
