@interface ECAPOPAuthScheme : ECAuthScheme

@property (class, readonly) ECAPOPAuthScheme *apopAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)humanReadableName;
- (id)name;
- (unsigned int)applescriptScheme;

@end
