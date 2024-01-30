@protocol CKInteractionNotificationViewDelegate;

@interface CKInteractionNotificationView : UIView

@property (weak, nonatomic) id<CKInteractionNotificationViewDelegate> delegate;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
