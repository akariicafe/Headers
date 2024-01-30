@class UILabel, NSAttributedString;
@protocol MUOverallRatingPlatterViewModel;

@interface MUOverallRatingPlatterView : UIView {
    UILabel *_attributionLabel;
    UILabel *_starLabel;
    UILabel *_ratingLabel;
}

@property (readonly, nonatomic) NSAttributedString *starString;
@property (readonly, nonatomic) NSAttributedString *ratingString;
@property (retain, nonatomic) id<MUOverallRatingPlatterViewModel> viewModel;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupSubviews;
- (id)_attributesWithFont:(id)a0 color:(id)a1;
- (void)_updateAttributiion;

@end
