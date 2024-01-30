@class NSString, UIImageView, UIImage, UILabel;

@interface PKSearchSuggestionCollectionViewCell : PKDashboardCollectionViewCell {
    UILabel *_labelSuggestion;
    UIImageView *_imageViewIcon;
    BOOL _isTemplateLayout;
}

@property (retain, nonatomic) NSString *suggestion;
@property (retain, nonatomic) UIImage *icon;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetFonts;

@end
