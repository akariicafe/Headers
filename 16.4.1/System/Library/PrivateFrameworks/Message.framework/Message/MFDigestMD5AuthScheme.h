@interface MFDigestMD5AuthScheme : ECAuthenticationScheme

- (id)name;
- (id)humanReadableName;
- (Class)authenticatorClass;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (BOOL)hasEncryption;

@end
