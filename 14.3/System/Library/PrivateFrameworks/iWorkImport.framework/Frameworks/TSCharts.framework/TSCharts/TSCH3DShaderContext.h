@class NSSet, TSCH3DVersion, TSCH3DShaderResource;

@interface TSCH3DShaderContext : NSObject {
    struct ObjectStateMatchObject { struct ObjcSharedPtr<NSSet> { NSSet *mValue; } mEffects; struct vector<TSCH3D::ResourceAttributeState, std::__1::allocator<TSCH3D::ResourceAttributeState> > { struct ResourceAttributeState *__begin_; struct ResourceAttributeState *__end_; struct __compressed_pair<TSCH3D::ResourceAttributeState *, std::__1::allocator<TSCH3D::ResourceAttributeState> > { struct ResourceAttributeState *__value_; } __end_cap_; } mAttributes; struct vector<TSCH3D::TextureAttributeState, std::__1::allocator<TSCH3D::TextureAttributeState> > { struct TextureAttributeState *__begin_; struct TextureAttributeState *__end_; struct __compressed_pair<TSCH3D::TextureAttributeState *, std::__1::allocator<TSCH3D::TextureAttributeState> > { struct TextureAttributeState *__value_; } __end_cap_; } mTextures; } _state;
}

@property (retain, nonatomic) TSCH3DVersion *version;
@property (retain, nonatomic) TSCH3DShaderResource *shader;
@property (copy, nonatomic) NSSet *debugEffects;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (const struct ObjectStateMatchObject { struct ObjcSharedPtr<NSSet> { id x0; } x0; struct vector<TSCH3D::ResourceAttributeState, std::__1::allocator<TSCH3D::ResourceAttributeState> > { struct ResourceAttributeState *x0; struct ResourceAttributeState *x1; struct __compressed_pair<TSCH3D::ResourceAttributeState *, std::__1::allocator<TSCH3D::ResourceAttributeState> > { struct ResourceAttributeState *x0; } x2; } x1; struct vector<TSCH3D::TextureAttributeState, std::__1::allocator<TSCH3D::TextureAttributeState> > { struct TextureAttributeState *x0; struct TextureAttributeState *x1; struct __compressed_pair<TSCH3D::TextureAttributeState *, std::__1::allocator<TSCH3D::TextureAttributeState> > { struct TextureAttributeState *x0; } x2; } x2; } *)state;
- (id)textureFunctionNameForVariable:(id)a0 projective:(BOOL)a1;
- (id)discardStatement;
- (id)diffEffects:(id)a0;
- (id)initWithObjectState:(const struct ObjectState { struct ObjcSharedPtr<NSSet> { id x0; } x0; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { struct Lookup<TSCH3D::AttributeSpecs> *x0; struct Lookup<TSCH3D::AttributeSpecs> *x1; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { struct Lookup<TSCH3D::AttributeSpecs> *x0; } x2; } x1; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { struct Lookup<TSCH3D::TextureAttributes> *x0; struct Lookup<TSCH3D::TextureAttributes> *x1; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { struct Lookup<TSCH3D::TextureAttributes> *x0; } x2; } x2; } *)a0 version:(id)a1;
- (id)textureVariables;
- (struct TextureAttributes { int x0; int x1; BOOL x2; BOOL x3; BOOL x4; struct TextureSizeHint { int x0; struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; } x1; } x5; BOOL x6; })textureAttributesForVariable:(id)a0;

@end
