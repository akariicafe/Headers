@class TSDStroke;

@interface TSCH3DPrefilteredLineSetting : NSObject

@property (nonatomic) BOOL useNormals;
@property (nonatomic) BOOL disableColorOutput;
@property (nonatomic) BOOL cullBackfaces;
@property (nonatomic) struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } filterRadius;
@property (nonatomic) float lineWidth;
@property (nonatomic) struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } strokeColor;
@property (copy, nonatomic) TSDStroke *stroke;

+ (id)setting;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
