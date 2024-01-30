@class UIView, NSString, UIFont, PXCMMPosterHeaderView, UIImageView, PXCMMSuggestionViewModel, PXRoundedCornerOverlayView, UILabel;
@protocol PXCMMSuggestionViewDelegate;

@interface PXCMMSuggestionView : UICollectionViewCell <PXChangeObserver> {
    PXCMMPosterHeaderView *_headerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_combinedFaceTileImageView;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    UIFont *_titleFont;
    UIFont *_titleBoldFont;
}

@property (retain, nonatomic) PXCMMSuggestionViewModel *viewModel;
@property (weak, nonatomic) id<PXCMMSuggestionViewDelegate> delegate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } headerViewBounds;
@property (readonly, nonatomic) UIView *previewView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })posterHeaderViewSizeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (struct CGSize { double x0; double x1; })posterImageSizeThatFits:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 viewModel:(id)a1;

- (id)focusEffect;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateFonts;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateHeaderView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_updateSubtitle;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)_updateCombinedFaceTileImage;
- (void)_updateOpaqueAncestorBackgroundColor;
- (BOOL)test_selected;
- (id)test_subtitle;
- (id)test_title;

@end
