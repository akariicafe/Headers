@interface USKUtility : NSObject

+ (struct { void /* unknown type, empty encoding */ x0[4]; })localTransformWithNode:(id)a0 time:(double)a1;
+ (id)shaderNodeType:(id)a0;
+ (id)USDPreviewSurfaceDefaults;
+ (id)constantMaterialPropertiesWithMaterial:(id)a0;
+ (id)firstUVMeshAttributeNameInMaterial:(id)a0;
+ (BOOL)isSceneGraphNode:(id)a0;
+ (BOOL)isTransformNode:(id)a0;
+ (id)meshGroupsWithNode:(id)a0;
+ (id)targetPropertyWithProperty:(id)a0;
+ (id)textureMaterialPropertiesWithMaterial:(id)a0;
+ (id)transformKeyTimesWithNode:(id)a0;
+ (id)meshUniqueAndTriangulate:(id)a0 names:(id)a1;
+ (id)bufferMaterialPropertiesWithMaterial:(id)a0;
+ (BOOL)isShaderOutputProperty:(id)a0;
+ (void)setLocalTransformWithNode:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 time:(double)a2;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })worldTransformWithNode:(id)a0 time:(double)a1;

@end
