@class UIView;

@interface AVPlayerView : AVPresentationContainerView

@property (nonatomic) BOOL needsInitialLayout;
@property (retain, nonatomic) UIView *contentView;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentView:(id)a1;
- (void)_beginManagingContentViewIfNeeded;
- (void)_stopManagingContentView;

@end
