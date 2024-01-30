@interface MFCRAM_MD5AuthScheme : MFAuthScheme

- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (BOOL)hasEncryption;
- (Class)authenticatorClass;
- (BOOL)sendsPlainTextPasswords;
- (id)humanReadableName;
- (id)name;

@end
