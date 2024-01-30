@class UILabel, UIImageView, UILayoutGuide;
@protocol MUCuratedCollectionSummary;

@interface MUCuratedCollectionSummaryView : UIView {
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIImageView *_imageView;
    UILayoutGuide *_layoutGuide;
}

@property (retain, nonatomic) id<MUCuratedCollectionSummary> viewModel;

- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupSubviews;
- (id)_attributesWithFont:(id)a0 color:(id)a1;
- (id)publisherString;

@end
