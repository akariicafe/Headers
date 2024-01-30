@interface MCDrawInput : MCKeyboardInput

@property (readonly, nonatomic) struct PathResampler { struct PathResamplerParams { double segment_length; int inflection_point_detection_mode; int inflection_point_type; BOOL should_downsample; double minimum_pause_length; BOOL should_flush_on_pause; } m_params; struct Path { struct vector<TI::CP::PathSample, std::__1::allocator<TI::CP::PathSample> > { struct PathSample *__begin_; struct PathSample *__end_; struct __compressed_pair<TI::CP::PathSample *, std::__1::allocator<TI::CP::PathSample> > { struct PathSample *__value_; } __end_cap_; } m_samples; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *__value_; } __end_cap_; } m_inflection_points; } m_resampled_path; struct Path { struct vector<TI::CP::PathSample, std::__1::allocator<TI::CP::PathSample> > { struct PathSample *__begin_; struct PathSample *__end_; struct __compressed_pair<TI::CP::PathSample *, std::__1::allocator<TI::CP::PathSample> > { struct PathSample *__value_; } __end_cap_; } m_samples; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *__value_; } __end_cap_; } m_inflection_points; } m_raw_path; BOOL m_is_final; unsigned int m_processed_sample_count; unsigned int m_retroactively_processed_sample_count; } resampler;
@property (nonatomic) int drawHand;
@property (readonly, nonatomic) struct RefPtr<TI::Favonius::KeyboardLayout> { struct KeyboardLayout *m_ptr; } keyboardLayout;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentLayoutCharacterKeysFrame;
@property (readonly, nonatomic) BOOL isCompleting;
@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic) BOOL isDrawing;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (BOOL)canComposeNew:(id)a0;
- (void)composeNew:(id)a0;
- (id)initWithKeyboardLayout:(const struct RefPtr<TI::Favonius::KeyboardLayout> { struct KeyboardLayout *x0; } *)a0;
- (id)initWithKeyboardLayout:(const struct RefPtr<TI::Favonius::KeyboardLayout> { struct KeyboardLayout *x0; } *)a0 currentLayoutCharacterKeysFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> { unsigned long long x0; struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0> { struct RefPtr<TI::Favonius::LayoutKey> *x0; unsigned long long x1; } x1; })copyLayoutKeys;
- (BOOL)_canCompose;
- (void)composeWith:(id)a0;
- (void)_appendAndResampleWithPoint:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 force:(double)a2 radius:(double)a3 shouldFinalize:(BOOL)a4;
- (void)_updateSampledInputs;
- (void)_updateSampledInputsWithResampler:(const struct PathResampler { struct PathResamplerParams { double x0; int x1; int x2; BOOL x3; double x4; BOOL x5; } x0; struct Path { struct vector<TI::CP::PathSample, std::__1::allocator<TI::CP::PathSample> > { struct PathSample *x0; struct PathSample *x1; struct __compressed_pair<TI::CP::PathSample *, std::__1::allocator<TI::CP::PathSample> > { struct PathSample *x0; } x2; } x0; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x0; } x2; } x1; } x1; struct Path { struct vector<TI::CP::PathSample, std::__1::allocator<TI::CP::PathSample> > { struct PathSample *x0; struct PathSample *x1; struct __compressed_pair<TI::CP::PathSample *, std::__1::allocator<TI::CP::PathSample> > { struct PathSample *x0; } x2; } x0; struct vector<unsigned int, std::__1::allocator<unsigned int> > { unsigned int *x0; unsigned int *x1; struct __compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > { unsigned int *x0; } x2; } x1; } x2; BOOL x3; unsigned int x4; unsigned int x5; } *)a0 permanentlyFinalized:(BOOL)a1;

@end
