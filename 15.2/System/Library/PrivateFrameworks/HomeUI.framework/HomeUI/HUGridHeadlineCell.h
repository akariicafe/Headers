@class UIView, NSString, NSArray, HFItem, UIImageView, HUGridHeadlineCellLayoutOptions, UILabel, HUGridCellBackgroundView;
@protocol HUResizableCellDelegate;

@interface HUGridHeadlineCell : UICollectionViewCell <HUGridCellProtocol>

@property (retain, nonatomic) UILabel *headlineLabel;
@property (retain, nonatomic) UIView *editingBackgroundContainerView;
@property (retain, nonatomic) HUGridCellBackgroundView *editingBackgroundView;
@property (retain, nonatomic) UIView *editingBackgroundDarkeningView;
@property (retain, nonatomic) UIImageView *editingChevronImageView;
@property (retain, nonatomic) NSArray *headlineCellConstraints;
@property (retain, nonatomic) HUGridHeadlineCellLayoutOptions *layoutOptions;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } unpaddedContentFrame;
@property (nonatomic, getter=areCellContentsHidden) BOOL cellContentsHidden;
@property (nonatomic, getter=isRearranging) BOOL rearranging;
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled;
@property (nonatomic) double pointerRegionMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;

+ (BOOL)requiresConstraintBasedLayout;
+ (Class)layoutOptionsClass;

- (void)setHighlighted:(BOOL)a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)_setupCommonCellAppearance;
- (void)_updateHeadlineLabel;

@end
