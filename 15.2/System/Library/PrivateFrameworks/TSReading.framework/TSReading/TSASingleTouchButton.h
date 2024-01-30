@class UIImage;

@interface TSASingleTouchButton : UIButton

@property (nonatomic) BOOL showsTouchOnTopWhenHighlighted;
@property (retain, nonatomic) UIImage *touchImage;

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })_pressFeedbackPosition;
- (id)_pressFeedbackImage;

@end
