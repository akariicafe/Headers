@class NSIndexSet, NSSet, TSCH3DShaderEffectsStates, NSMutableArray, TSCH3DShaderEffects;

@interface TSCH3DCombinationRenderProcessor : TSCH3DRetargetRenderProcessor {
    NSIndexSet *_enabled;
    struct StateStack<glm::detail::tmat4x4<float>, 8> { unsigned long long _index; struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } _current; struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } _stack[8]; } _transformStack;
    struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } _projection;
    struct StateStack<TSCH3D::ObjectState, 6> { unsigned long long _index; struct ObjectState { struct ObjcSharedPtr<NSSet> { NSSet *mValue; } _effects; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>> { void *__begin_; void *__end_; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>> { void *__value_; } __end_cap_; } _attributes; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>> { void *__begin_; void *__end_; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>> { void *__value_; } __end_cap_; } _textures; } _current; struct ObjectState { struct ObjcSharedPtr<NSSet> { NSSet *mValue; } _effects; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>> { void *__begin_; void *__end_; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>> { void *__value_; } __end_cap_; } _attributes; struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>> { void *__begin_; void *__end_; struct __compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>> { void *__value_; } __end_cap_; } _textures; } _stack[6]; } _objectStateStack;
    struct StateStack<TSCH3D::RenderState, 10> { unsigned long long _index; struct RenderState { struct BlendState { BOOL _blend; int _blendMode; } blendState; struct DepthState { BOOL depthTest; BOOL depthMask; } depthState; BOOL culling; BOOL cullBack; BOOL polygonOffset; float polygonOffsetFactor; float polygonOffsetUnits; struct EnableClipDistances { struct array<bool, 8> { BOOL __elems_[8]; } states; } enableClipDistances; } _current; struct RenderState { struct BlendState { BOOL _blend; int _blendMode; } blendState; struct DepthState { BOOL depthTest; BOOL depthMask; } depthState; BOOL culling; BOOL cullBack; BOOL polygonOffset; float polygonOffsetFactor; float polygonOffsetUnits; struct EnableClipDistances { struct array<bool, 8> { BOOL __elems_[8]; } states; } enableClipDistances; } _stack[10]; } _renderStateStack;
    TSCH3DShaderEffects *_effects;
}

@property (retain, nonatomic) NSMutableArray *effectsStatesStack;
@property (readonly, nonatomic) TSCH3DShaderEffectsStates *currentEffectsStates;
@property (readonly, nonatomic) BOOL transformChanged;
@property (readonly, nonatomic) BOOL projectionChanged;

+ (id)processorWithOriginal:(id)a0 enableTypes:(id)a1;

- (void)replace:(void *)a0;
- (void)scale:(void *)a0;
- (id)effects;
- (void)pushState;
- (void).cxx_destruct;
- (void)popState;
- (id).cxx_construct;
- (void)translate:(void *)a0;
- (void)setRenderState:(const void *)a0;
- (id)initWithOriginal:(id)a0;
- (BOOL)matrixEnabled;
- (void *)projectionTransform;
- (void *)currentTransform;
- (void)projection:(void *)a0;
- (void)multiply:(void *)a0;
- (void)pushMatrix;
- (void)popMatrix;
- (void)pushRenderState;
- (void)popRenderState;
- (struct RenderState { struct BlendState { BOOL x0; int x1; } x0; struct DepthState { BOOL x0; BOOL x1; } x1; BOOL x2; BOOL x3; BOOL x4; float x5; float x6; struct EnableClipDistances { struct array<bool, 8> { BOOL x0[8]; } x0; } x7; })renderState;
- (void)resetBuffers;
- (void)copyProjectionInto:(void *)a0;
- (void)copyTransformInto:(void *)a0;
- (id)effectsStates;
- (id)initWithOriginal:(id)a0 enableTypes:(id)a1;
- (BOOL)objectStateEnabled;
- (BOOL)shaderEnabled;
- (BOOL)renderStateEnabled;
- (void)resetTransformChangeFlags;
- (void *)objectStateStack;

@end
