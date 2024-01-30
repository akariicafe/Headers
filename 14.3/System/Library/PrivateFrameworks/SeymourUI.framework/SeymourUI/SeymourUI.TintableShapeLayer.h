@interface SeymourUI.TintableShapeLayer : CAShapeLayer {
    void /* unknown type, empty encoding */ tintAdjustmentMode;
    void /* unknown type, empty encoding */ undimmedBorderColor;
    void /* unknown type, empty encoding */ undimmedStrokeColor;
}

@property (nonatomic, retain) struct CGColor { } *borderColor;
@property (nonatomic, retain) struct CGColor { } *strokeColor;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithLayer:(id)a0;

@end
