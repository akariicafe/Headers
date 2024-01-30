@class NSString;
@protocol MTLTexture;

@interface PXGUniform : NSObject

@property (retain, nonatomic) id<MTLTexture> cachedTexture;
@property (readonly, nonatomic) unsigned long long bindType;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ encodableValue;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *declaration;
@property (nonatomic) float floatValue;
@property (nonatomic) void /* unknown type, empty encoding */ float2Value;
@property (nonatomic) void /* unknown type, empty encoding */ float3Value;
@property (nonatomic) void /* unknown type, empty encoding */ float4Value;
@property (nonatomic) struct CGImage { } *image;
@property (copy, nonatomic) id /* block */ textureProvider;
@property (readonly, nonatomic) long long bytesLength;
@property (readonly, nonatomic) const void *bytes;

- (id)initWithName:(id)a0 type:(unsigned long long)a1;
- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)bindableTextureForContext:(id)a0;
- (BOOL)isEquivalentToUniform:(id)a0;
- (id)parameterDeclarationWithBindingIndex:(long long)a0;

@end
