@interface MFDigestMD5AuthScheme : MFAuthScheme

- (id)name;
- (id)humanReadableName;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (BOOL)hasEncryption;
- (Class)authenticatorClass;

@end
