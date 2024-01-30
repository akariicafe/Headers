@class UIImage;

@interface TSASingleTouchButton : UIButton

@property (nonatomic) BOOL showsTouchOnTopWhenHighlighted;
@property (retain, nonatomic) UIImage *touchImage;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)_pressFeedbackImage;
- (struct CGPoint { double x0; double x1; })_pressFeedbackPosition;

@end
