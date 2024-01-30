@class NSString, UIVisualEffectView, UILabel, CALayer, UIButton;
@protocol CKSearchResultsTitleHeaderCellDelegate;

@interface CKSearchResultsTitleHeaderCell : UICollectionReusableView <CKSearchResultSupplementryCell>

@property (retain, nonatomic) UILabel *sectionTitle;
@property (retain, nonatomic) UIButton *showAllButton;
@property (retain, nonatomic) CALayer *topHairline;
@property (nonatomic) double titleTopPadding;
@property (nonatomic) double titleBottomPadding;
@property (retain, nonatomic) UIVisualEffectView *macBackgroundVisualEffectView;
@property (weak, nonatomic) id<CKSearchResultsTitleHeaderCellDelegate> delegate;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) BOOL useMacSidebarVisualEffectView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supplementaryViewType;
+ (double)desiredZPosition;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)prepareForReuse;
- (void)setTitle:(id)a0;
- (void)layoutSubviews;
- (void)_showAllButtonTapped:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
