@class _SAUIPortalView, UIView;

@interface _SAUIProvidedViewContainerView : UIView {
    _SAUIPortalView *_portalView;
}

@property (retain, nonatomic) UIView *providedView;
@property (readonly, nonatomic) BOOL portalsProvidedView;

- (id)_contentView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
