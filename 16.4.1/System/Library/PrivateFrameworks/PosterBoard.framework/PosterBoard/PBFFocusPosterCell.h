@class NSLayoutConstraint, NSString, UIImageView, UIImage, UIView, PBFPosterGalleryPreviewComplicationContentView, PBFFocusCheckboxView;
@protocol PBFPosterPreview, PBFPosterPreviewGenerator;

@interface PBFFocusPosterCell : UICollectionViewCell {
    UIView *_shadowView;
    UIImageView *_posterView;
    PBFPosterGalleryPreviewComplicationContentView *_posterPreviewComplicationContentView;
    PBFFocusCheckboxView *_checkboxView;
    UIImageView *_focusSymbolView;
    NSLayoutConstraint *_posterViewHeightConstraint;
}

@property (weak, nonatomic) id<PBFPosterPreviewGenerator> posterPreviewGenerator;
@property (retain, nonatomic) id<PBFPosterPreview> posterPreview;
@property (retain, nonatomic) UIImage *posterImage;
@property (nonatomic) long long actionType;
@property (nonatomic, getter=isCheckboxOn) BOOL checkboxOn;
@property (copy, nonatomic) NSString *focusSymbolImageName;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } posterPreviewFrame;

+ (double)cornerRadius;
+ (struct CGSize { double x0; double x1; })estimatedCellSizeForItemWidth:(double)a0 screen:(id)a1 hasAccessory:(BOOL)a2;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)createConstraints;
- (void)createCheckboxViewIfNecessary;
- (void)createFocusSymbolViewIfNecessary;
- (void)createPosterView;
- (void)createPreviewComplicationContentView;
- (void)createShadowView;
- (id)makeComplicationsPortalView;
- (void)setCheckboxAssociatedPosterIdentifier:(id)a0;

@end
