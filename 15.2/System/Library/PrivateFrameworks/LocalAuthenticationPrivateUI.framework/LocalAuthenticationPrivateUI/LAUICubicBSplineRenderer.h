@class LAUIMetalRenderLoop, MTLRenderPassDescriptor;
@protocol MTLCommandQueue, MTLDepthStencilState, MTLDevice, MTLBuffer, MTLTexture, MTLComputePipelineState, MTLRenderPipelineState;

@interface LAUICubicBSplineRenderer : NSObject {
    LAUIMetalRenderLoop *_render_loop;
    unsigned long long _frame_index;
    struct renderer_shared_state { id<MTLDevice> device; id<MTLDepthStencilState> depth_stencil_state; id<MTLComputePipelineState> tesselation_factor_pipeline; id<MTLRenderPipelineState> tube_pipeline; struct array<id<MTLRenderPipelineState>, 3> { id<MTLRenderPipelineState> __elems_[3]; } begin_cap_pipelines; struct array<id<MTLRenderPipelineState>, 3> { id<MTLRenderPipelineState> __elems_[3]; } end_cap_pipelines; id<MTLComputePipelineState> horizontal_blur_pipeline; id<MTLComputePipelineState> vertical_blur_pipeline; id<MTLComputePipelineState> accumulator_pipeline; } _shared_render_state;
    id<MTLCommandQueue> _command_queue;
    MTLRenderPassDescriptor *_render_pass_descriptor;
    MTLRenderPassDescriptor *_clear_pass_descriptor;
    struct vector<(anonymous namespace)::buffer_group, std::allocator<(anonymous namespace)::buffer_group>> { struct buffer_group *__begin_; struct buffer_group *__end_; struct __compressed_pair<(anonymous namespace)::buffer_group *, std::allocator<(anonymous namespace)::buffer_group>> { struct buffer_group *__value_; } __end_cap_; } _ring_buffer;
    struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } _ring_start;
    struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } _ring_end;
    id<MTLBuffer> _tesselation_factors;
    unsigned long long _drawable_width;
    unsigned long long _drawable_height;
    id<MTLTexture> _multisample_texture;
    id<MTLTexture> _depth_stencil_texture;
    BOOL _textures_dirty;
    struct array<id<MTLTexture>, 2> { id<MTLTexture> __elems_[2]; } _textures;
    unsigned long long _texture_index;
    struct vector<LAUI_uniform_cubic_b_spline_renderer_private::control_point, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point>> { struct control_point *__begin_; struct control_point *__end_; struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer_private::control_point *, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point>> { struct control_point *__value_; } __end_cap_; } _control_points;
    struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *__begin_; unsigned short *__end_; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *__value_; } __end_cap_; } _control_point_indices;
    struct vector<LAUI_uniform_cubic_b_spline_renderer_private::control_point, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point>> { struct control_point *__begin_; struct control_point *__end_; struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer_private::control_point *, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::control_point>> { struct control_point *__value_; } __end_cap_; } _cap_control_points;
    struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *__begin_; unsigned short *__end_; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *__value_; } __end_cap_; } _cap_control_point_indices;
    struct vector<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform>> { struct instance_uniform *__begin_; struct instance_uniform *__end_; struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform *, std::allocator<LAUI_uniform_cubic_b_spline_renderer_private::instance_uniform>> { struct instance_uniform *__value_; } __end_cap_; } _spline_instance_uniforms;
    BOOL _caps_dirty;
    double _last_render_time;
    struct global_state_animator { struct animator<float, 0> { float _target; float _intermediate; float _actual; float _k; float _elapsed_n; float _target_n; float _visual_target_n; unsigned char _interpolation; } accumulator_growth; struct animator<float, 0> { float _target; float _intermediate; float _actual; float _k; float _elapsed_n; float _target_n; float _visual_target_n; unsigned char _interpolation; } accumulator_persistence; struct animator<float, 0> { float _target; float _intermediate; float _actual; float _k; float _elapsed_n; float _target_n; float _visual_target_n; unsigned char _interpolation; } accumulator_luminance_alpha_factor; struct animator<float, 0> { float _target; float _intermediate; float _actual; float _k; float _elapsed_n; float _target_n; float _visual_target_n; unsigned char _interpolation; } blur_scale; struct animator<nullptr_t, 0> { char *_target; char *_intermediate; char *_actual; float _k; float _elapsed_n; float _target_n; float _visual_target_n; unsigned char _interpolation; } hidden_animator; } _global_state_animator;
    struct vector<LAUI_uniform_cubic_b_spline_renderer::global_state, std::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state>> { struct global_state *__begin_; struct global_state *__end_; struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::global_state *, std::allocator<LAUI_uniform_cubic_b_spline_renderer::global_state>> { struct global_state *__value_; } __end_cap_; } _animation_targets;
    unsigned long long _current_animation_target_index;
    BOOL _reversed;
    BOOL _needs_update;
    struct animation_completion_handler_container { id /* block */ _completion; } _completion_container;
    struct vector<LAUI_uniform_cubic_b_spline_renderer::spline, std::allocator<LAUI_uniform_cubic_b_spline_renderer::spline>> { struct spline *__begin_; struct spline *__end_; struct __compressed_pair<LAUI_uniform_cubic_b_spline_renderer::spline *, std::allocator<LAUI_uniform_cubic_b_spline_renderer::spline>> { struct spline *__value_; } __end_cap_; } _spline_state;
    struct vector<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance>, std::allocator<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance> *, std::allocator<std::vector<LAUI_uniform_cubic_b_spline_renderer::spline_instance>>> { void *__value_; } __end_cap_; } _instance_state;
    unsigned long long _instance_count;
}

@property (nonatomic, getter=isWireframeEnabled, setter=setWireframeEnabled:) BOOL wireframe_enabled;
@property (nonatomic, getter=modelTransform, setter=setModelTransform:) struct double4x4 { void /* unknown type, empty encoding */ columns[4]; } model_transform;
@property (nonatomic, getter=viewTransform, setter=setViewTransform:) struct double4x4 { void /* unknown type, empty encoding */ columns[4]; } view_transform;
@property (nonatomic, getter=projectionTransform, setter=setProjectionTransform:) struct double4x4 { void /* unknown type, empty encoding */ columns[4]; } projection_transform;

+ (struct optional<LAUI_uniform_cubic_b_spline_renderer::renderer_shared_state> { union { char x0; struct renderer_shared_state { id x0; id x1; id x2; id x3; struct array<id<MTLRenderPipelineState>, 3> { id x0[3]; } x4; struct array<id<MTLRenderPipelineState>, 3> { id x0[3]; } x5; id x6; id x7; id x8; } x1; } x0; BOOL x1; })sharedStateForDevice:(id)a0;

- (void)releaseBuffers;
- (void)_updateState:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (unsigned long long)addInstance:(const void *)a0;
- (BOOL)renderAtTime:(double)a0;
- (void)_updateCapForSpline:(unsigned long long)a0 instance:(unsigned long long)a1;
- (void)_updateTarget:(const struct global_state { float x0; float x1; float x2; float x3; float x4; float x5; } *)a0;
- (void)updateRenderPassDescriptorWithDrawable:(id)a0;
- (void)setSplineInstanceUniform:(struct instance_uniform { struct float4x4 { void /* unknown type, empty encoding */ x0[4]; } x0; float x1; float x2; float x3; float x4; })a0 forSpline:(unsigned long long)a1 instance:(unsigned long long)a2 forceCapRegeneration:(BOOL)a3;
- (id)initWithRenderLoop:(id)a0 sharedState:(const void *)a1;
- (unsigned long long)addSpline:(const void *)a0;
- (void)setAnimationTargets:(const void *)a0 withCompletion:(id /* block */)a1;
- (void)setAnimationTargets:(const void *)a0 forSpline:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)setAnimationTargets:(const void *)a0 forSpline:(unsigned long long)a1 instance:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (struct spline_instance_state { struct quatf { } x0; struct quatf { } x1; float x2; float x3; float x4; float x5; float x6; BOOL x7; float x8; void /* function */ *x9; })animationTargetForSpline:(unsigned long long)a0 instance:(unsigned long long)a1;
- (void)updateLastRenderTime;

@end
