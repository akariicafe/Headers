@class UILabel, NSAttributedString, UITapGestureRecognizer;
@protocol MUOverallRatingPlatterViewModel;

@interface MUOverallRatingPlatterView : UIView {
    UILabel *_attributionLabel;
    UILabel *_starLabel;
    UILabel *_ratingLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (readonly, nonatomic) NSAttributedString *starString;
@property (readonly, nonatomic) NSAttributedString *ratingString;
@property (retain, nonatomic) id<MUOverallRatingPlatterViewModel> viewModel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (id)_attributesWithFont:(id)a0 color:(id)a1;
- (void)_updateAttributiion;
- (void)addSelectionGestureWithTarget:(id)a0 action:(SEL)a1;

@end
