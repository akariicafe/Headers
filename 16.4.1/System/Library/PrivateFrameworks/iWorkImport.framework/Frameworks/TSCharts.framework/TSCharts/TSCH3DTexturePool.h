@interface TSCH3DTexturePool : NSObject

+ (id)pool;

- (void)add:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (struct TextureCoordinateConverter { struct box<glm::detail::tvec2<float>> { struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; } x0; })coordinateConverterForTexture:(id)a0 material:(id)a1;
- (id)resourceForMaterial:(id)a0;

@end
