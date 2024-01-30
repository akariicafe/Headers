@class NSString, PXCMMSpec, PXUpdater, UIView, PXCMMTranscriptBubbleFooterView, PXCMMPosterHeaderView;
@protocol PXUIImageProvider, PXDisplayAsset;

@interface PXCMMTranscriptBubbleView : UIView {
    PXUpdater *_updater;
    UIView *_highlightView;
    PXCMMTranscriptBubbleFooterView *_footerView;
    PXCMMPosterHeaderView *_headerView;
}

@property (retain, nonatomic) PXCMMSpec *spec;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } bubbleSafeAreaInsets;
@property (copy, nonatomic) NSString *imageTitleText;
@property (copy, nonatomic) NSString *imageSubtitleText;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) id<PXUIImageProvider> mediaProvider;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 withSpec:(id)a1;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_performLayoutInSize:(struct CGSize { double x0; double x1; })a0 updateSubviewFrames:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (void)_updateFooterView;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)setAsset:(id)a0 mediaProvider:(id)a1;
- (void)_updateHighlightView;
- (BOOL)_wantsHighlightView;
- (void)_updatePosterView;

@end
