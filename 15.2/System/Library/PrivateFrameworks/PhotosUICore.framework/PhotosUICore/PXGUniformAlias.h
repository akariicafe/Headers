@class PXGUniform;

@interface PXGUniformAlias : PXGUniform

@property (readonly, nonatomic) PXGUniform *original;
@property (readonly, nonatomic) long long index;

- (float)floatValue;
- (long long)bytesLength;
- (id)initWithName:(id)a0 type:(unsigned long long)a1;
- (id)description;
- (id)cachedTexture;
- (const void *)bytes;
- (void).cxx_destruct;
- (struct CGImage { } *)image;
- (void /* unknown type, empty encoding */)float2Value;
- (void /* unknown type, empty encoding */)float3Value;
- (void /* unknown type, empty encoding */)float4Value;
- (id)name;
- (id /* block */)textureProvider;
- (BOOL)isEquivalentToUniform:(id)a0;
- (void)setCachedTexture:(id)a0;
- (id)initWithIndex:(long long)a0 aliasing:(id)a1;

@end
