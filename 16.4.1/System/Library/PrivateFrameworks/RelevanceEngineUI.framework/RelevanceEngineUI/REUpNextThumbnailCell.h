@class UIFont, UILayoutGuide, UIImageView, UIVisualEffectView, UILabel, NSArray, NSLayoutConstraint;

@interface REUpNextThumbnailCell : REUpNextBaseCell {
    UILayoutGuide *_labelLayoutGuide;
    UIImageView *_imageView;
    UILabel *_headerLabel;
    UILabel *_descriptionLine1Label;
    UILabel *_descriptionLine2Label;
    UIVisualEffectView *_headerEffectView;
    UIVisualEffectView *_descriptionLine1EffectView;
    UIVisualEffectView *_descriptionLine2EffectView;
    UIVisualEffectView *_imageEffectView;
    UIFont *_standardFont;
    UIFont *_italicFont;
    UIFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
    BOOL _showingHeader;
    BOOL _showingThreeLineLayout;
}

+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)configureWithContent:(id)a0;
- (void)defaultTextColorDidChange;
- (id)primaryEffectViews;
- (id)secondaryEffectViews;

@end
