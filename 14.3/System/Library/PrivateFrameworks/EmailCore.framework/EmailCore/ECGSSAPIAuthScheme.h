@interface ECGSSAPIAuthScheme : ECAuthScheme

@property (class, readonly) ECGSSAPIAuthScheme *gssapiAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (BOOL)requiresPassword;
- (id)humanReadableName;
- (id)name;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
