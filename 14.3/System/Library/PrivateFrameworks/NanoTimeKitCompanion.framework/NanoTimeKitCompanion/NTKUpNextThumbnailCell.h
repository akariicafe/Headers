@class NTKUpNextImageView, NSString, UILayoutGuide, NTKColoringLabel, CLKFont, NSArray, NSLayoutConstraint;

@interface NTKUpNextThumbnailCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider> {
    UILayoutGuide *_labelLayoutGuide;
    UILayoutGuide *_imageLayoutGuide;
    NTKUpNextImageView *_imageView;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_descriptionLine1Label;
    NTKColoringLabel *_descriptionLine2Label;
    NTKColoringLabel *_descriptionLine3Label;
    CLKFont *_standardFont;
    CLKFont *_italicFont;
    CLKFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSArray *_withDescription3Constraints;
    NSArray *_withoutDescription3Constraints;
    NSLayoutConstraint *_imageLayoutGuideWidthConstraint;
    NSLayoutConstraint *_imageLayoutGuideHeightConstraint;
    BOOL _showingHeader;
    BOOL _showingThirdLine;
    BOOL _showingSmallThumbnail;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })suggestedBodyImageSizeForDevice:(id)a0;

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)configureWithContent:(id)a0;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)colorForView:(id)a0 accented:(BOOL)a1;

@end
