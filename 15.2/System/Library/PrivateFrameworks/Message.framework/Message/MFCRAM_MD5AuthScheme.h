@interface MFCRAM_MD5AuthScheme : ECAuthenticationScheme

- (id)name;
- (id)humanReadableName;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (BOOL)hasEncryption;
- (Class)authenticatorClass;
- (BOOL)sendsPlainTextPasswords;

@end
