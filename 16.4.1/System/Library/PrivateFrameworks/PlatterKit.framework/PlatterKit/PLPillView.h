@class PLPillContentView, NSArray, PLPillContentItem, NSString, UIView, MTShadowView, MTMaterialView;

@interface PLPillView : UIView <PLPill, PLContentSizeCategoryAdjusting, MTMaterialGrouping, MTVisualStylingProviding> {
    MTMaterialView *_materialView;
    MTShadowView *_shadowView;
    PLPillContentView *_contentView;
}

@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } shadowOutsets;
@property (readonly, nonatomic) UIView *leadingAccessoryView;
@property (readonly, nonatomic) UIView *trailingAccessoryView;
@property (copy, nonatomic) NSArray *centerContentItems;
@property (copy, nonatomic) PLPillContentItem *referenceContentItemForIntrinsicContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (double)_effectiveCornerRadius;
- (void)_configureShadowViewIfNecessary;
- (id)visualStylingProviderForCategory:(long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)setCenterContentItems:(id)a0 animated:(BOOL)a1;
- (id)initWithLeadingAccessoryView:(id)a0 trailingAccessoryView:(id)a1;
- (id)initWithLeadingAccessoryView:(id)a0;
- (void)updateCenterContentItem:(id)a0 withContentItem:(id)a1;
- (id)initWithTrailingAccessoryView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentItem:(id)a0;

@end
