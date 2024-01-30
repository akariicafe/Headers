@class MDLBufferView, NSString, MDLTextureSampler, NSURL, MDLMaterialPropertyNode;

@interface MDLMaterialProperty : NSObject <MDLNamed, NSCopying> {
    NSString *_string;
    NSString *_name;
    NSURL *_url;
    MDLTextureSampler *_textureSampler;
    void /* unknown type, empty encoding */ _float;
    struct { void /* unknown type, empty encoding */ columns[4]; } _matrix;
    struct CGColor { } *_color;
    MDLBufferView *_buffer;
    unsigned long long _stride;
    unsigned long long _semantic;
    MDLMaterialPropertyNode *_node;
    MDLMaterialProperty *_overrider;
    MDLMaterialProperty *_overridee;
}

@property (nonatomic) BOOL isDefaultValue;
@property (readonly, nonatomic) MDLBufferView *bufferData;
@property (readonly, nonatomic) unsigned long long stride;
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

+ (struct { void /* unknown type, empty encoding */ x0[4]; })_decodeMatrixPropertyWithCoder:(id)a0 forKey:(id)a1;
+ (void /* unknown type, empty encoding */)_decodeVectorWithCoder:(id)a0 forKey:(id)a1;
+ (id)decodeMaterialPropertyWithCoder:(id)a0 forKey:(id)a1 allocator:(id)a2;

- (void)setProperties:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)clear;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 buffer:(id)a1;
- (id)initWithName:(id)a0 semantic:(unsigned long long)a1;
- (id)initWithName:(id)a0 semantic:(unsigned long long)a1 color:(struct CGColor { } *)a2;
- (id)initWithName:(SEL)a0 semantic:(id)a1 float2:(unsigned long long)a2;
- (id)initWithName:(SEL)a0 semantic:(id)a1 float3:(unsigned long long)a2;
- (id)initWithName:(SEL)a0 semantic:(id)a1 float4:(unsigned long long)a2;
- (id)initWithName:(id)a0 semantic:(unsigned long long)a1 float:(float)a2;
- (id)initWithName:(id)a0 semantic:(unsigned long long)a1 matrix4x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (id)initWithName:(id)a0 semantic:(unsigned long long)a1 string:(id)a2;
- (id)initWithName:(id)a0 semantic:(unsigned long long)a1 textureSampler:(id)a2;
- (void)_encodeVector:(SEL)a0 withCoder:(id)a1 forKey:(id)a2;
- (void)_encodeMatrixPropertyWithCoder:(id)a0 forKey:(id)a1;
- (void)encodeMaterialPropertyWithCoder:(id)a0 forKey:(id)a1 allocator:(id)a2;
- (id)initWithName:(id)a0 buffer:(id)a1 stride:(unsigned long long)a2;
- (id)initWithName:(id)a0 semantic:(unsigned long long)a1 URL:(id)a2;
- (id)initWithName:(SEL)a0 semantic:(id)a1 float4WithSRGBA:(unsigned long long)a2;
- (void)setMatrix4x4Value:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

@end
