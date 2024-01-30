@class UIView;

@interface _TVRMAlertButton : UIButton

@property (nonatomic) BOOL showingBackgroundEffect;
@property (retain, nonatomic) UIView *burnView;
@property (retain, nonatomic) UIView *plusDView;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
