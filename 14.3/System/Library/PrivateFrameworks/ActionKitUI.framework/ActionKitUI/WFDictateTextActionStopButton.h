@class NSLayoutConstraint, UIView;

@interface WFDictateTextActionStopButton : UIButton

@property (weak, nonatomic) UIView *redSquare;
@property (weak, nonatomic) NSLayoutConstraint *redSquareWidthConstraint;
@property (nonatomic) BOOL recording;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)currentLineWidth;
- (double)currentInnerCircleRadius;
- (double)currentStopButtonSize;
- (void)setRecording:(BOOL)a0 animated:(BOOL)a1;

@end
