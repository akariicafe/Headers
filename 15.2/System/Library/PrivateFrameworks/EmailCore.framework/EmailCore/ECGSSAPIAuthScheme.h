@interface ECGSSAPIAuthScheme : ECAuthScheme

@property (class, readonly) ECGSSAPIAuthScheme *gssapiAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)requiresPassword;
- (id)name;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
