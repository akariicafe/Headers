@class NSString, CKTwoButtonInlineNotificationView;
@protocol CKUnexpectedlyLoggedOutNotificationViewDelegate;

@interface CKUnexpectedlyLoggedOutNotificationView : UIView <CKTwoButtonInlineNotificationViewDelegate>

@property (retain, nonatomic) CKTwoButtonInlineNotificationView *inlineNotificationView;
@property (weak, nonatomic) id<CKUnexpectedlyLoggedOutNotificationViewDelegate> delegate;
@property (nonatomic) BOOL visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)inlineNotificationViewDidReceiveLeftButtonTap:(id)a0;
- (void)inlineNotificationViewDidReceiveRightButtonTap:(id)a0;
- (void)setVisible:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)visible;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)inlineNotificationView:(id)a0 didChangeRequestedHeight:(double)a1;
- (void)dealloc;

@end
