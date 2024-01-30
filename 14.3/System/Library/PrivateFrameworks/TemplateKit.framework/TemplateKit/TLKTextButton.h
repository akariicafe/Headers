@class UIFont, TLKImageView, NSString, TLKRichText, TLKImage;

@interface TLKTextButton : UIButton

@property BOOL attributedTitleExplicitlySet;
@property (retain, nonatomic) TLKImageView *tlkImageView;
@property (nonatomic) unsigned long long prominence;
@property (copy, nonatomic) TLKRichText *richTitle;
@property (copy, nonatomic) TLKImage *tlkImage;
@property (nonatomic) struct CGSize { double x0; double x1; } minimumSize;
@property (nonatomic) struct CGSize { double x0; double x1; } maximumSize;
@property (nonatomic) BOOL alwaysShowPlaceholderView;
@property BOOL matchesHeightForAlignmentRectWithIntrinsicContentSize;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long alignment;

- (void)tlk_updateForAppearance:(id)a0;
- (void)setAttributedTitle:(id)a0 forState:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)updateAttributedTitle;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)didMoveToWindow;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void)layoutSubviews;
- (BOOL)hasTemplateUIImage;
- (void)matchHeightForAlignmentRectWithIntrinsicContentSizeIfNecessary;
- (BOOL)allowsVibrancy;
- (void)_updateSelectionViewForState:(unsigned long long)a0;
- (BOOL)isImageMode;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
