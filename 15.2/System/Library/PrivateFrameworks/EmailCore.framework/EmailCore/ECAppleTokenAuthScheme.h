@interface ECAppleTokenAuthScheme : ECAuthScheme

@property (class, readonly) ECAppleTokenAuthScheme *appleTokenAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)requiresPassword;
- (BOOL)requiresUsername;
- (id)name;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;
- (id)supportedSASLMechanisms;

@end
