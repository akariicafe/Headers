@class NSString, NSArray, PLPillContentItem, UIView, PLPillContentView;

@interface PLPillControl : UIControl <UIPointerInteractionDelegate, PLPill, PLContentSizeCategoryAdjusting> {
    PLPillContentView *_contentView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *leadingAccessoryView;
@property (readonly, nonatomic) UIView *trailingAccessoryView;
@property (copy, nonatomic) NSArray *centerContentItems;
@property (copy, nonatomic) PLPillContentItem *referenceContentItemForIntrinsicContentSize;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)initWithLeadingAccessoryView:(id)a0 trailingAccessoryView:(id)a1;
- (void)setCenterContentItems:(id)a0 animated:(BOOL)a1;
- (id)initWithLeadingAccessoryView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentItem:(id)a0;
- (id)initWithTrailingAccessoryView:(id)a0;
- (void)_configureShadowNecessary;
- (void)_performHighlight:(BOOL)a0;

@end
