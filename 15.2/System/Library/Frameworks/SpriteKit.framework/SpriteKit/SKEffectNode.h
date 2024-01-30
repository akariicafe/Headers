@class NSString, NSDictionary, CIFilter, SKShader, SKWarpGeometry;

@interface SKEffectNode : SKNode <SKWarpable> {
    void *_skcEffectNode;
}

@property (retain, nonatomic) CIFilter *filter;
@property (nonatomic) BOOL shouldCenterFilter;
@property (nonatomic) BOOL shouldEnableEffects;
@property (nonatomic) BOOL shouldRasterize;
@property (nonatomic) long long blendMode;
@property (retain, nonatomic) SKShader *shader;
@property (copy, nonatomic) NSDictionary *attributeValues;
@property (retain, nonatomic) SKWarpGeometry *warpGeometry;
@property (nonatomic) long long subdivisionLevels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)a0 onObject:(id)a1 outOptions:(id *)a2 outError:(id *)a3;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToNode:(id)a0;
- (void *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (id)valueForAttributeNamed:(id)a0;
- (void)setValue:(id)a0 forAttributeNamed:(id)a1;
- (void)_scaleFactorChangedFrom:(float)a0 to:(float)a1;
- (void)_flippedChangedFrom:(BOOL)a0 to:(BOOL)a1;

@end
