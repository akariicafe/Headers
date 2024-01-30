@class NSDictionary;

@interface SXTextComponentBlueprint : SXComponentBlueprint

@property (readonly, nonatomic) NSDictionary *exclusionPaths;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)invalidateSize;
- (void)addExclusionPath:(id)a0 forIdentifier:(id)a1;

@end
