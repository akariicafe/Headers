@interface TSCH3DPhongLikeLightingModel : TSCH3DLightingModel

- (id)init;
- (id)diffuseTextureTiling;
- (void)affect:(id)a0 states:(id)a1 scene:(id)a2 texturePool:(id)a3 percentage:(id)a4;
- (id)representativeMaterialLightenedByPercentage:(id)a0;
- (struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; })p_lightenedColorForColor:(const void *)a0 percentage:(id)a1;
- (id)phongMaterials;
- (id)p_lightenDiffuseMaterial:(id)a0 percentage:(id)a1;
- (id)initWithPhongMaterialPackageArchive:(const void *)a0 lightingModelArchive:(const void *)a1 unarchiver:(id)a2;
- (void)saveToPhongMaterialPackageArchive:(void *)a0 environmentPackageArchive:(void *)a1 archiver:(id)a2;

@end
