@interface MFCRAM_MD5AuthScheme : ECAuthenticationScheme

- (id)name;
- (id)humanReadableName;
- (Class)authenticatorClass;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (BOOL)hasEncryption;
- (BOOL)sendsPlainTextPasswords;

@end
