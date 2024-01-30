@class MRUNowPlayingControlsView, MRUEmbeddingView, MRUVisualStylingProvider, UIView, MRUNowPlayingContainerView;

@interface MRUNowPlayingView : UIView

@property (retain, nonatomic) MRUNowPlayingContainerView *containerView;
@property (readonly, nonatomic) MRUNowPlayingControlsView *controlsView;
@property (readonly, nonatomic) MRUEmbeddingView *collapsedEmbeddingView;
@property (retain, nonatomic) UIView *suggestionsView;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) long long layout;
@property (nonatomic) long long context;
@property (nonatomic) BOOL supportsHorizontalLayout;
@property (nonatomic) BOOL showSuggestionsView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateVisibility;
- (void)layoutSubviewsVertical;
- (void).cxx_destruct;
- (void)layoutSubviewsHorizontal;

@end
