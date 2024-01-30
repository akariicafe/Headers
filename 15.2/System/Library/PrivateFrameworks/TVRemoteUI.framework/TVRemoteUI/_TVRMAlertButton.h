@class UIView;

@interface _TVRMAlertButton : UIButton

@property (nonatomic) BOOL showingBackgroundEffect;
@property (retain, nonatomic) UIView *burnView;
@property (retain, nonatomic) UIView *plusDView;

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
