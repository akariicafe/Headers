@class BKSHIDEventAuthenticationMessage;

@interface UIEventAttributionView : UIView

@property (class, copy, nonatomic) BKSHIDEventAuthenticationMessage *lastEventMessage;

- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)_updateLayerContents;
- (void)didMoveToWindow;

@end
