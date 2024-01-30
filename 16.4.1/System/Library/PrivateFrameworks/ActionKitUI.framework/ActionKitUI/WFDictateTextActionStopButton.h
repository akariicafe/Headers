@class NSLayoutConstraint, UIView;

@interface WFDictateTextActionStopButton : UIButton

@property (weak, nonatomic) UIView *redSquare;
@property (weak, nonatomic) NSLayoutConstraint *redSquareWidthConstraint;
@property (nonatomic) BOOL recording;

- (id)accessibilityLabel;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (double)currentInnerCircleRadius;
- (double)currentLineWidth;
- (double)currentStopButtonSize;
- (void)setRecording:(BOOL)a0 animated:(BOOL)a1;

@end
