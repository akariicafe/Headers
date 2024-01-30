@class NSDictionary, NSString, NSArray;

@interface AVTStickerShaderModifier : NSObject

@property (retain, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *entryPoint;
@property (readonly, nonatomic) NSString *geometryName;
@property (readonly, nonatomic) NSString *data;
@property (readonly, nonatomic) NSArray *properties;
@property (readonly, nonatomic) BOOL forceDoubleSided;

+ (id)shaderModifierFromDictionary:(id)a0 assetsPath:(id)a1;
+ (id)entryPointForModifierName:(id)a0;
+ (id)shaderModifierCache;
+ (id)encapsulateShaderData:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (void)applyToAvatar:(id)a0 reversionContext:(id)a1;
- (id)dictionaryWithTargetPath:(id)a0;
- (void)applyToNode:(id)a0 reversionContext:(id)a1;
- (void)applyToNodeHierarchy:(id)a0 reversionContext:(id)a1;
- (id)initWithEntryPoint:(id)a0 geometryName:(id)a1 data:(id)a2 properties:(id)a3 forceDoubleSided:(BOOL)a4;
- (id)cloneWithProperties:(id)a0;
- (id)findMaterialsForGeometryName:(id)a0 inAvatar:(id)a1;
- (void)applyToMaterial:(id)a0 reversionContext:(id)a1;

@end
