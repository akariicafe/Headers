@interface DIEncryptionCreator : DIEncryptionFrontend

+ (BOOL)supportsSecureCoding;

- (id)CLIPassphrasePrompt;
- (id)CLIVerifyPassphrasePrompt;
- (BOOL)allowStoringInKeychain;
- (id)GUIPassphraseLabel;
- (id)GUIVerifyPassphraseLabel;
- (id)GUIPassphrasePrompt;
- (BOOL)createAndStoreInSystemKeychainWithAccount:(id)a0 error:(id *)a1;
- (BOOL)createWithXpcHandler:(id)a0 error:(id *)a1;

@end
