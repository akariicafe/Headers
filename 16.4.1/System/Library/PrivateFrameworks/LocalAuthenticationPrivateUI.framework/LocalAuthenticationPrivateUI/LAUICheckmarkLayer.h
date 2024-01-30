@class UIColor, __end_cap_, CAShapeLayer, __end_;

@interface LAUICheckmarkLayer : CALayer {
    CAShapeLayer *_shape_layer;
    struct vector<CAShapeLayer *, std::allocator<CAShapeLayer *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<CAShapeLayer *__strong *, std::allocator<CAShapeLayer *>> { id *__value_; } x1; } _transient_shape_layers;
    BOOL _animating;
    unsigned int _animation_index;
    double _line_width;
    double _effective_line_width;
    struct vector<LAUI_CA_utilities::animation_completion_handler_container, std::allocator<LAUI_CA_utilities::animation_completion_handler_container>> { struct animation_completion_handler_container *__begin_; struct animation_completion_handler_container *__end_; struct __compressed_pair<LAUI_CA_utilities::animation_completion_handler_container *, std::allocator<LAUI_CA_utilities::animation_completion_handler_container>> { struct animation_completion_handler_container *__value_; } __end_cap_; } _completions;
}

@property (nonatomic) double lineWidthScale;
@property (readonly, copy, nonatomic) UIColor *primaryColor;
@property (readonly, nonatomic) struct CGColor { } *color;
@property (readonly, nonatomic, getter=isRevealed) BOOL revealed;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } aspectSize;

- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setColor:(struct CGColor { } *)a0 animated:(BOOL)a1;
- (void)setRevealed:(BOOL)a0 animated:(BOOL)a1;
- (void)setPrimaryColor:(id)a0 animated:(BOOL)a1;
- (void)setRevealed:(BOOL)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })defaultSizeForCircleWithDiameter:(double)a0 scale:(double)a1;
- (void)_animationsDidResolve;
- (void)_executeCompletions:(BOOL)a0;
- (void)_updateRevealedAnimated:(BOOL)a0;

@end
