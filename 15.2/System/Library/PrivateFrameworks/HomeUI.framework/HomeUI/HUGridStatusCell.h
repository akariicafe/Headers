@class UIStackView, UIView, HUGridStatusCellTextView, NSArray, NSString, HUGridStatusCellLayoutOptions, HFItem, UILabel, HUIconView;

@interface HUGridStatusCell : HUGridCell <HUAccessoryViewCellProtocol, HUIconRenouncing> {
    HFItem *_item;
}

@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) HUGridStatusCellTextView *titleTextView;
@property (retain, nonatomic) UIStackView *descriptionStackView;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (retain, nonatomic) UILabel *largeDescriptionLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *accessoryView;
@property (weak, nonatomic) HUGridStatusCellLayoutOptions *statusCellLayoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;
+ (Class)layoutOptionsClass;
+ (BOOL)shouldUseOutlineStyleForCategory:(unsigned long long)a0;
+ (id)outlineStyleBackgroundEffect;

- (void)setItem:(id)a0;
- (void)_updateStyle;
- (void)_updateLabels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateBadge;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)item;
- (id)initWithCoder:(id)a0;
- (void)_invalidateConstraints;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)a0;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)_updateIconAnimated:(BOOL)a0;
- (unsigned long long)iconDisplayStyle;
- (void)layoutOptionsDidChange;
- (void)reclaimIconIfPossible;
- (BOOL)managesOwnBackgroundViewLayout;
- (void)renounceIcon;
- (void)_setupStatusCell;
- (id)_iconBadgeViewWithImage:(id)a0;
- (id)_numberedBadgeViewWithValue:(long long)a0;
- (void)_updateMask;

@end
