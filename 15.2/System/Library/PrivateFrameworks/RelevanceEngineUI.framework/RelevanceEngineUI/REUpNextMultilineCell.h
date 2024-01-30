@class UIFont, UILayoutGuide, UIVisualEffectView, NSArray, UILabel, REUpNextImageView, REUpNextAccessoryView;

@interface REUpNextMultilineCell : REUpNextBaseCell {
    UILayoutGuide *_contentLayoutGuide;
    UILayoutGuide *_descriptionTextLayoutGuide;
    UILayoutGuide *_bodyImageSizingLayoutGuide;
    BOOL _showingHeader;
    BOOL _showingHeaderImage;
    BOOL _showingThreeLineLayout;
    BOOL _showingAccessory;
    BOOL _showingDescriptionImage;
    BOOL _usingStretchableImage;
    unsigned int _headerImageEdge;
    UILabel *_headerLabel;
    UILabel *_descriptionLine1Label;
    UILabel *_descriptionLine2Label;
    UIVisualEffectView *_headerImageEffectView;
    UIVisualEffectView *_headerVisualEffectView;
    UIVisualEffectView *_descriptionLine1EffectView;
    UIVisualEffectView *_descriptionLine2EffectView;
    REUpNextImageView *_headerImage;
    REUpNextAccessoryView *_accessoryView;
    REUpNextImageView *_descriptionImageView;
    UIFont *_standardFont;
    UIFont *_italicFont;
    UIFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSArray *_withDescriptionAccessoryConstraints;
    NSArray *_withoutDescriptionAccessoryConstraints;
    NSArray *_withDescriptionImageViewConstraints;
    NSArray *_withStretchableDescriptionImageViewConstraints;
    NSArray *_withoutDescriptionImageViewConstraints;
}

+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)configureWithContent:(id)a0;
- (void)defaultTextColorDidChange;
- (void)_updateHeaderColor;
- (id)primaryEffectViews;
- (id)secondaryEffectViews;

@end
