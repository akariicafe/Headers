@interface DIEncryptionCreator : DIEncryptionFrontend

+ (BOOL)supportsSecureCoding;

- (id)CLIVerifyPassphrasePrompt;
- (id)GUIPassphrasePrompt;
- (id)CLIPassphrasePrompt;
- (id)GUIPassphraseLabel;
- (id)GUIVerifyPassphraseLabel;
- (BOOL)allowStoringInKeychain;
- (BOOL)createAndStoreInSystemKeychainWithAccount:(id)a0 error:(id *)a1;
- (BOOL)createWithXpcHandler:(id)a0 error:(id *)a1;

@end
