@class NSIndexSet, NSSet, TSCH3DShaderEffectsStates, NSMutableArray, TSCH3DShaderEffects;

@interface TSCH3DCombinationRenderProcessor : TSCH3DRetargetRenderProcessor {
    NSIndexSet *mEnabled;
    struct StateStack<glm::detail::tmat4x4<float>, 8> { unsigned long long mIndex; struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } mCurrent; struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } mStack[8]; } mTransformStack;
    struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } mProjection;
    struct StateStack<TSCH3D::ObjectState, 6> { unsigned long long mIndex; struct ObjectState { struct ObjcSharedPtr<NSSet> { NSSet *mValue; } mEffects; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { struct Lookup<TSCH3D::AttributeSpecs> *__begin_; struct Lookup<TSCH3D::AttributeSpecs> *__end_; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { struct Lookup<TSCH3D::AttributeSpecs> *__value_; } __end_cap_; } mAttributes; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { struct Lookup<TSCH3D::TextureAttributes> *__begin_; struct Lookup<TSCH3D::TextureAttributes> *__end_; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { struct Lookup<TSCH3D::TextureAttributes> *__value_; } __end_cap_; } mTextures; } mCurrent; struct ObjectState { struct ObjcSharedPtr<NSSet> { NSSet *mValue; } mEffects; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { struct Lookup<TSCH3D::AttributeSpecs> *__begin_; struct Lookup<TSCH3D::AttributeSpecs> *__end_; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { struct Lookup<TSCH3D::AttributeSpecs> *__value_; } __end_cap_; } mAttributes; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { struct Lookup<TSCH3D::TextureAttributes> *__begin_; struct Lookup<TSCH3D::TextureAttributes> *__end_; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { struct Lookup<TSCH3D::TextureAttributes> *__value_; } __end_cap_; } mTextures; } mStack[6]; } mObjectStateStack;
    struct StateStack<TSCH3D::RenderState, 10> { unsigned long long mIndex; struct RenderState { struct BlendState { BOOL mBlend; int mBlendMode; } blendState; struct DepthState { BOOL depthTest; BOOL depthMask; } depthState; BOOL culling; BOOL cullBack; BOOL polygonOffset; float polygonOffsetFactor; float polygonOffsetUnits; struct EnableClipDistances { struct array<bool, 8> { BOOL __elems_[8]; } states; } enableClipDistances; } mCurrent; struct RenderState { struct BlendState { BOOL mBlend; int mBlendMode; } blendState; struct DepthState { BOOL depthTest; BOOL depthMask; } depthState; BOOL culling; BOOL cullBack; BOOL polygonOffset; float polygonOffsetFactor; float polygonOffsetUnits; struct EnableClipDistances { struct array<bool, 8> { BOOL __elems_[8]; } states; } enableClipDistances; } mStack[10]; } mRenderStateStack;
    TSCH3DShaderEffects *mEffects;
}

@property (retain, nonatomic) NSMutableArray *effectsStatesStack;
@property (readonly, nonatomic) TSCH3DShaderEffectsStates *currentEffectsStates;
@property (readonly, nonatomic) BOOL transformChanged;
@property (readonly, nonatomic) BOOL projectionChanged;

+ (id)processorWithOriginal:(id)a0 enableTypes:(id)a1;

- (void)replace:(struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)a0;
- (void)scale:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)effects;
- (void)translate:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0;
- (void)popState;
- (void)pushState;
- (id)initWithOriginal:(id)a0;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)projectionTransform;
- (BOOL)matrixEnabled;
- (struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)currentTransform;
- (void)projection:(struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)a0;
- (void)multiply:(struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)a0;
- (void)pushMatrix;
- (void)popMatrix;
- (void)pushRenderState;
- (void)popRenderState;
- (struct RenderState { struct BlendState { BOOL x0; int x1; } x0; struct DepthState { BOOL x0; BOOL x1; } x1; BOOL x2; BOOL x3; BOOL x4; float x5; float x6; struct EnableClipDistances { struct array<bool, 8> { BOOL x0[8]; } x0; } x7; })renderState;
- (void)setRenderState:(const struct RenderState { struct BlendState { BOOL x0; int x1; } x0; struct DepthState { BOOL x0; BOOL x1; } x1; BOOL x2; BOOL x3; BOOL x4; float x5; float x6; struct EnableClipDistances { struct array<bool, 8> { BOOL x0[8]; } x0; } x7; } *)a0;
- (void)resetBuffers;
- (void)copyProjectionInto:(struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)a0;
- (void)copyTransformInto:(struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)a0;
- (id)effectsStates;
- (id)initWithOriginal:(id)a0 enableTypes:(id)a1;
- (BOOL)objectStateEnabled;
- (BOOL)shaderEnabled;
- (BOOL)renderStateEnabled;
- (void)resetTransformChangeFlags;
- (struct StateStack<TSCH3D::ObjectState, 6> { unsigned long long x0; struct ObjectState { struct ObjcSharedPtr<NSSet> { id x0; } x0; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { struct Lookup<TSCH3D::AttributeSpecs> *x0; struct Lookup<TSCH3D::AttributeSpecs> *x1; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { struct Lookup<TSCH3D::AttributeSpecs> *x0; } x2; } x1; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { struct Lookup<TSCH3D::TextureAttributes> *x0; struct Lookup<TSCH3D::TextureAttributes> *x1; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { struct Lookup<TSCH3D::TextureAttributes> *x0; } x2; } x2; } x1; struct ObjectState { struct ObjcSharedPtr<NSSet> { id x0; } x0; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { struct Lookup<TSCH3D::AttributeSpecs> *x0; struct Lookup<TSCH3D::AttributeSpecs> *x1; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> > > { struct Lookup<TSCH3D::AttributeSpecs> *x0; } x2; } x1; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { struct Lookup<TSCH3D::TextureAttributes> *x0; struct Lookup<TSCH3D::TextureAttributes> *x1; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> > > { struct Lookup<TSCH3D::TextureAttributes> *x0; } x2; } x2; } x2[6]; } *)objectStateStack;

@end
