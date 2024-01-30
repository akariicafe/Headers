@class NSString, NSArray;

@interface TSCH3DShaderVariable : NSObject <NSCopying> {
    NSArray *_elements;
    unsigned long long _componentCount;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *commonShaderType;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *precision;
@property (readonly, nonatomic) struct TSCH3DShaderType { unsigned long long _value; } shaderType;
@property (readonly, nonatomic) struct TSCH3DShaderType { unsigned long long x0; } initialLinkType;
@property (readonly, nonatomic) TSCH3DShaderVariable *genericName;
@property (readonly, nonatomic) BOOL isSpecial;
@property (readonly, nonatomic) BOOL isTexture;
@property (readonly, nonatomic) unsigned long long componentCount;
@property (readonly, nonatomic) unsigned long long arraySize;

+ (id)variableWithName:(id)a0 type:(id)a1 precision:(id)a2 arraySize:(unsigned long long)a3 shaderType:(struct TSCH3DShaderType { unsigned long long x0; })a4 isSpecial:(BOOL)a5 generic:(id)a6;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 type:(id)a1 precision:(id)a2 arraySize:(unsigned long long)a3 shaderType:(struct TSCH3DShaderType { unsigned long long x0; })a4 isSpecial:(BOOL)a5 generic:(id)a6;
- (id)variableAtIndex:(unsigned long long)a0;

@end
