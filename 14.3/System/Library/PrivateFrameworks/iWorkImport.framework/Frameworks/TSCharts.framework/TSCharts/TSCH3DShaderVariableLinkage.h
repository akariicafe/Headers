@class NSMutableSet, TSCH3DShaderVariable;

@interface TSCH3DShaderVariableLinkage : NSObject {
    NSMutableSet *mDependees;
}

@property (readonly, nonatomic) TSCH3DShaderVariable *variable;
@property (readonly, nonatomic) NSMutableSet *dependees;
@property (readonly, nonatomic) struct TSCH3DShaderType { unsigned long long x0; } shaderType;
@property (readonly, nonatomic) struct TSCH3DShaderType { unsigned long long mValue; } linked;
@property (readonly, nonatomic) struct TSCH3DShaderVariableScopes { struct array<TSCH3DShaderVariableScopeType, 2> { struct TSCH3DShaderVariableScopeType { unsigned long long mValue; } __elems_[2]; } mScopes; } scope;
@property (readonly, nonatomic) BOOL isLinked;
@property (readonly, nonatomic) BOOL notLinked;
@property (readonly, nonatomic) struct TSCH3DShaderVariableScopes { struct array<TSCH3DShaderVariableScopeType, 2> { struct TSCH3DShaderVariableScopeType { unsigned long long mValue; } __elems_[2]; } mScopes; } declaredScope;
@property (nonatomic) BOOL isUsed;
@property (readonly, nonatomic) BOOL isSpecial;
@property (readonly, nonatomic) BOOL isUniform;
@property (readonly, nonatomic) BOOL hasAttribute;
@property (readonly, nonatomic) BOOL isAttribute;
@property (readonly, nonatomic) BOOL isVertexVarying;
@property (readonly, nonatomic) BOOL isFragment;
@property (readonly, nonatomic) BOOL hasFragment;
@property (readonly, nonatomic) BOOL canHaveFragment;
@property (readonly, nonatomic) BOOL isVertex;
@property (readonly, nonatomic) BOOL hasVertex;
@property (readonly, nonatomic) BOOL scopeHasFragment;
@property (readonly, nonatomic) BOOL scopedInAll;
@property (readonly, nonatomic) BOOL isFragmentLinkable;
@property (readonly, nonatomic) BOOL isVertexLinkable;
@property (readonly, nonatomic) unsigned long long hasGlobal;

+ (id)linkageWithVariable:(id)a0;

- (void)dealloc;
- (void)unlink;
- (id)description;
- (id).cxx_construct;
- (id)initWithVariable:(id)a0;
- (void)setLinkage:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (BOOL)hasBody:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (void)addShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (void)addLinkage:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (void)addDeclaredShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (BOOL)isVarying:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (BOOL)updateLinkage:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (void)addBodyScope:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (id)nameForShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (id)variableDeclarationInShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1 isMetal:(BOOL)a2;
- (void)setShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (id)globalNameForShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (id)variableQualifiersWithStorageQualifier:(id)a0 isMetal:(BOOL)a1;
- (BOOL)declaredInShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (BOOL)isGlobalScope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a0;
- (BOOL)hasShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (id)resolveGlobalNameForShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1 defaultTo:(id)a2;
- (BOOL)hasVarying;
- (BOOL)updateShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (void)removeShader:(struct TSCH3DShaderType { unsigned long long x0; })a0 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x0; })a1;
- (void)removeLinkage:(struct TSCH3DShaderType { unsigned long long x0; })a0;
- (BOOL)hasLinkage:(struct TSCH3DShaderType { unsigned long long x0; })a0;

@end
