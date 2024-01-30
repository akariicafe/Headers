@interface ECAPOPAuthScheme : ECAuthScheme

@property (class, readonly) ECAPOPAuthScheme *apopAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)name;
- (void)dealloc;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;

@end
