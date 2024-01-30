@class UIColor, WFAction, CAShapeLayer, NSProgress;

@interface WFMaskedShadowView : UIView {
    BOOL _attributesChanged;
    BOOL _actionRunning;
}

@property (nonatomic) long long mode;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIColor *runningShadowColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (weak, nonatomic) CAShapeLayer *borderLayer;
@property (weak, nonatomic) WFAction *action;
@property (nonatomic) long long actionIndex;
@property (weak, nonatomic) NSProgress *workflowRunningProgress;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)attributesDidChange;
- (void)initializeInstance;
- (void)updateRunningIndicator;
- (void)applyAttributes;
- (void)updateShadowColorAnimated:(BOOL)a0;

@end
