@class UIColor, VUITextLayout;

@interface VUIProductMetadataLayout : TVViewLayout

@property (readonly, nonatomic) VUITextLayout *headerTextLayout;
@property (readonly, nonatomic) VUITextLayout *infoHeaderTextLayout;
@property (readonly, nonatomic) VUITextLayout *infoBodyTextLayout;
@property (readonly, nonatomic) VUITextLayout *infoDescriptionTextLayout;
@property (readonly, nonatomic) VUITextLayout *footerTextLayout;
@property (readonly, nonatomic) double descriptionLineSpacing;
@property (readonly, nonatomic) double bottomPadding;
@property (readonly, nonatomic) double verticalSpacing;
@property (readonly, nonatomic) UIColor *seeMoreTextColor;
@property (readonly, nonatomic) UIColor *darkSeeMoreTextColor;
@property (readonly, nonatomic) UIColor *highlightedDescriptionText;
@property (readonly, nonatomic) UIColor *darkHighlightedDescriptionText;
@property (readonly, nonatomic) BOOL isHorizontal;
@property (readonly, nonatomic) BOOL isDynamicTextEnabled;
@property (readonly, nonatomic) BOOL isTVOS;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_setupLayouts;

@end
