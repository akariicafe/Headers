@class UIColor, UIFont;

@interface PBFPosterGalleryViewSpec : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } posterContentSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } posterHeroContentSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } posterEditingConfirmationContentSize;
@property (readonly, nonatomic) double posterCornerRadius;
@property (readonly, nonatomic) double sectionHorizontalMargin;
@property (readonly, nonatomic) double sectionVerticalMargin;
@property (readonly, nonatomic) double standardSpacing;
@property (readonly, nonatomic) double groupSpacing;
@property (readonly, nonatomic) UIFont *sectionHeaderTitleFont;
@property (readonly, nonatomic) UIColor *sectionHeaderTitleColor;
@property (readonly, nonatomic) UIFont *sectionHeaderSubtitleFont;
@property (readonly, nonatomic) UIColor *sectionHeaderSubtitleColor;
@property (readonly, nonatomic) double sectionHeaderSubtitleTopMargin;
@property (readonly, nonatomic) double sectionHeaderTopSpacing;
@property (readonly, nonatomic) double sectionHeaderBottomSpacing;
@property (readonly, nonatomic) UIFont *previewCellLabelFont;
@property (readonly, nonatomic) UIColor *previewCellLabelColor;
@property (readonly, nonatomic) double previewCellLabelToImageVerticalSpacing;
@property (readonly, nonatomic) UIFont *previewCellDescriptionLabelFont;
@property (readonly, nonatomic) UIColor *previewCellDescriptionLabelColor;
@property (readonly, nonatomic) double previewSmartAlbumCellAdditionalTopMargin;

+ (id)specForScreen:(id)a0;

- (id)initWithScreen:(id)a0;
- (void).cxx_destruct;

@end
