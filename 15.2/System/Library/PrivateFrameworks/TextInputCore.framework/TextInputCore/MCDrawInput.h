@interface MCDrawInput : MCKeyboardInput

@property (readonly, nonatomic) struct PathResampler { struct PathResamplerParams { double segment_length; int inflection_point_detection_mode; int inflection_point_type; BOOL should_downsample; double minimum_pause_length; BOOL should_flush_on_pause; } m_params; struct Path { struct vector<TI::CP::PathSample, std::allocator<TI::CP::PathSample>> { struct PathSample *__begin_; struct PathSample *__end_; struct __compressed_pair<TI::CP::PathSample *, std::allocator<TI::CP::PathSample>> { struct PathSample *__value_; } __end_cap_; } m_samples; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } m_inflection_points; } m_resampled_path; struct Path { struct vector<TI::CP::PathSample, std::allocator<TI::CP::PathSample>> { struct PathSample *__begin_; struct PathSample *__end_; struct __compressed_pair<TI::CP::PathSample *, std::allocator<TI::CP::PathSample>> { struct PathSample *__value_; } __end_cap_; } m_samples; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } m_inflection_points; } m_raw_path; BOOL m_is_final; unsigned int m_processed_sample_count; unsigned int m_retroactively_processed_sample_count; } resampler;
@property (nonatomic) int drawHand;
@property (readonly, nonatomic) struct RefPtr<TI::Favonius::KeyboardLayout> { struct KeyboardLayout *m_ptr; } keyboardLayout;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentLayoutCharacterKeysFrame;
@property (readonly, nonatomic) BOOL isCompleting;
@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic) BOOL isDrawing;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (BOOL)canComposeNew:(id)a0;
- (void)composeNew:(id)a0;
- (id)initWithKeyboardLayout:(const void *)a0;
- (id)initWithKeyboardLayout:(const void *)a0 currentLayoutCharacterKeysFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> { unsigned long long x0; struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> { void *x0; unsigned long long x1; } x1; })copyLayoutKeys;
- (BOOL)_canCompose;
- (void)composeWith:(id)a0;
- (void)_appendAndResampleWithPoint:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 force:(double)a2 radius:(double)a3 shouldFinalize:(BOOL)a4;
- (void)_updateSampledInputs;
- (void)_updateSampledInputsWithResampler:(const void *)a0 permanentlyFinalized:(BOOL)a1;

@end
