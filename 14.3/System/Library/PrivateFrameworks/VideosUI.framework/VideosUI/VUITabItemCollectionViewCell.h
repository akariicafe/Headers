@class TVImageLayout, IKViewElement, VUILabel, VUITextLayout, _TVImageView, NSShadow;

@interface VUITabItemCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUITextLayout *titleLayout;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) TVImageLayout *imageLayout;
@property (retain, nonatomic) NSShadow *shadow;

+ (id)configureViewWithElement:(id)a0 existingCell:(id)a1;
+ (BOOL)shouldDoubleGlyphSizeForSectionElement:(id)a0;
+ (id)_findChildElementWithLongestTextInSectionElement:(id)a0;
+ (BOOL)_shouldDoubleGlyphSizeForElement:(id)a0 numberOfTabs:(unsigned long long)a1;
+ (id)tabItemTextLayout;
+ (double)_windowWidthForElement:(id)a0;
+ (double)_imageElementWidthForElement:(id)a0;
+ (struct CGSize { double x0; double x1; })_glyphSizeForContentSizeCategory:(id)a0 preferredNormalImageWidth:(double)a1;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_tabItemPaddingForContentSizeCategory:(id)a0 hasTitle:(BOOL)a1;
+ (double)_tabItemImageToTextMarginForContentSizeCategory:(id)a0;
+ (BOOL)_shouldDisplayTitleInTwoLinesForElement:(id)a0 tabItemSize:(struct CGSize { double x0; double x1; })a1 labelSize:(struct CGSize { double x0; double x1; })a2 contentSizeCategory:(id)a3 numberOfTabs:(unsigned long long)a4;
+ (BOOL)_isContentSizeCategoryBetweenAX1toAX3:(id)a0;
+ (double)_columnWidthForElement:(id)a0 numberOfTabs:(unsigned long long)a1;
+ (double)_preferredHeightForContentSizeCategory:(id)a0;

- (void).cxx_destruct;
- (id)largeContentImage;
- (id)largeContentTitle;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (BOOL)scalesLargeContentImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_imageLayout;
- (struct CGSize { double x0; double x1; })_layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (id)_titleLayout;
- (double)_updatedLabelWidthWithTwoLinesTitleForText:(id)a0;
- (struct CGSize { double x0; double x1; })_adjustedTabItemSizeForViewElement:(id)a0 tabItemSize:(struct CGSize { double x0; double x1; })a1 labelSize:(struct CGSize { double x0; double x1; })a2 numberOfTabs:(unsigned long long)a3;

@end
