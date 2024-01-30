@interface ECAPOPAuthScheme : ECAuthScheme

@property (class, readonly) ECAPOPAuthScheme *apopAuthScheme;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)name;
- (id)humanReadableName;
- (unsigned int)applescriptScheme;

@end
