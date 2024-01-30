@class UIVisualEffectView, UIView;
@protocol CKInlineNotificationViewDelegate;

@interface CKInlineNotificationView : UIView {
    BOOL _visible;
}

@property (readonly, nonatomic) BOOL _shouldSuppressLayout;
@property (readonly, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIVisualEffectView *backdropView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (nonatomic) BOOL animatingVisibility;
@property (weak, nonatomic) id<CKInlineNotificationViewDelegate> delegate;
@property (nonatomic) BOOL visible;

- (void).cxx_destruct;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_invalidateContentViewHeight;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })contentViewSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
