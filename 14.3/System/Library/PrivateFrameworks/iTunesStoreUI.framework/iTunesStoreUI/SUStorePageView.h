@class UIScrollView, UIView;

@interface SUStorePageView : UIView {
    UIScrollView *_headerScrollView;
}

@property (retain, nonatomic) UIView *backdropView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *previewOverlayView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentViewInsets;

- (void)dealloc;
- (void)layoutSubviews;

@end
