@class NSString, NSArray, MKBarView, _MKUILabel, UIView;

@interface MKRatingPlatterView : MKPlaceSectionItemView {
    MKBarView *_ratingCategoryBarView;
    _MKUILabel *_categoryLabel;
    UIView *_containerView;
    NSArray *_constraints;
}

@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) double score;
@property (nonatomic) double scale;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)traitCollectionDidChange:(id)a0;
- (void)_contentSizeChanged;
- (void)_setupInitialAppearance;
- (void)_setupSubviews;

@end
