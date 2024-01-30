@class NUSourceDefinition;

@interface NUResolvedSource : NUSource

@property (retain) NUSourceDefinition *resolvedSourceDefinition;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)sourceDefinition:(out id *)a0;

@end
