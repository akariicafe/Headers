@class MDLTextureSampler, NSString, MDLMaterialPropertyNode, NSURL;

@interface MDLMaterialProperty : NSObject <MDLNamed, NSCopying> {
    NSString *_string;
    NSString *_name;
    NSURL *_url;
    MDLTextureSampler *_textureSampler;
    void /* unknown type, empty encoding */ _float;
    struct { void /* unknown type, empty encoding */ columns[4]; } _matrix;
    struct CGColor { } *_color;
    unsigned long long _semantic;
    MDLMaterialPropertyNode *_node;
    MDLMaterialProperty *_overrider;
    MDLMaterialProperty *_overridee;
}

@property (nonatomic) BOOL isDefaultValue;
@property (nonatomic) unsigned long long semantic;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSURL *URLValue;
@property (retain, nonatomic) MDLTextureSampler *textureSamplerValue;
@property (nonatomic) struct CGColor { } *color;
@property (nonatomic) float floatValue;
@property (nonatomic) void /* unknown type, empty encoding */ float2Value;
@property (nonatomic) void /* unknown type, empty encoding */ float3Value;
@property (nonatomic) void /* unknown type, empty encoding */ float4Value;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } matrix4x4;
@property (nonatomic) float luminance;

- (void)setProperties:(id)a0;
- (void)clear;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 semantic:(unsigned long long)a1 textureSampler:(id)a2;
- (id)initWithName:(id)a0 semantic:(unsigned long long)a1 string:(id)a2;
- (id)initWithName:(id)a0 semantic:(unsigned long long)a1 float:(float)a2;
- (id)initWithName:(SEL)a0 semantic:(id)a1 float2:(unsigned long long)a2;
- (id)initWithName:(SEL)a0 semantic:(id)a1 float3:(unsigned long long)a2;
- (id)initWithName:(SEL)a0 semantic:(id)a1 float4:(unsigned long long)a2;
- (id)initWithName:(id)a0 semantic:(unsigned long long)a1 matrix4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (id)initWithName:(id)a0 semantic:(unsigned long long)a1 color:(struct CGColor { } *)a2;
- (id)initWithName:(id)a0 semantic:(unsigned long long)a1;
- (id)initWithName:(id)a0 semantic:(unsigned long long)a1 URL:(id)a2;
- (id)initWithName:(SEL)a0 semantic:(id)a1 float4WithSRGBA:(unsigned long long)a2;
- (void)setMatrix4x4Value:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
