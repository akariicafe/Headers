@class UIListContentView, NSArray, NSString, HUGridLayoutOptions, UIButton;
@protocol UIContentConfiguration;

@interface HUGridSectionHeaderView : UICollectionReusableView <UIContentView>

@property (retain, nonatomic) UIListContentView *contentView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSArray *headerCellConstraints;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (copy, nonatomic) id<UIContentConfiguration> configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_invalidateConstraints;
- (void)prepareForReuse;

@end
