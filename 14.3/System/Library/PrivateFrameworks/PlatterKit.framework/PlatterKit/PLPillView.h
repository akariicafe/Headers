@class PLPillContentView, NSArray, PLPillContentItem, NSString, UIView, MTShadowView, MTMaterialView;

@interface PLPillView : UIView <PLPill, PLContentSizeCategoryAdjusting, MTMaterialGrouping> {
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

- (BOOL)adjustForContentSizeCategoryChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithLeadingAccessoryView:(id)a0 trailingAccessoryView:(id)a1;
- (void)setCenterContentItems:(id)a0 animated:(BOOL)a1;
- (void)_configureShadowViewIfNecessary;
- (double)_effectiveCornerRadius;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentItem:(id)a0;
- (void)updateCenterContentItem:(id)a0 withContentItem:(id)a1;
- (id)initWithLeadingAccessoryView:(id)a0;
- (id)initWithTrailingAccessoryView:(id)a0;

@end
