@interface MFDigestMD5AuthScheme : ECAuthenticationScheme

- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (BOOL)hasEncryption;
- (Class)authenticatorClass;
- (id)humanReadableName;
- (id)name;

@end
