@class TSCH3DShaderVariable;

@interface TSCH3DTextureVariables : NSObject

@property (readonly, copy, nonatomic) TSCH3DShaderVariable *texture;
@property (readonly, copy, nonatomic) TSCH3DShaderVariable *texcoords;
@property (readonly, copy, nonatomic) TSCH3DShaderVariable *textureMatrix;

+ (id)variablesWithTexture:(id)a0 texcoords:(id)a1 textureMatrix:(id)a2;

- (void).cxx_destruct;
- (id)initWithTexture:(id)a0 texcoords:(id)a1 textureMatrix:(id)a2;

@end
