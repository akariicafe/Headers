@class NUSourceDefinition;

@interface NUResolvedSource : NUSource

@property (retain) NUSourceDefinition *resolvedSourceDefinition;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sourceDefinition:(out id *)a0;

@end
