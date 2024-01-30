@class NSArray, NSString, HFItemSection, UILabel, NSAttributedString, UIButton;
@protocol HFItemSectionAccessoryButtonHeaderDelegate;

@interface HUQuickControlSectionHeaderView : UICollectionReusableView <HFItemSectionAccessoryButtonHeader>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *labelConstraints;
@property (retain, nonatomic) UIButton *accessoryButton;
@property (retain, nonatomic) NSArray *accessoryButtonConstraints;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSAttributedString *attributedTitleText;
@property (retain, nonatomic) NSString *accessoryButtonTitleText;
@property (nonatomic) BOOL hideSeparator;
@property (nonatomic) BOOL hideAccessoryButton;
@property (nonatomic) BOOL hideHeaderText;
@property (weak, nonatomic) id<HFItemSectionAccessoryButtonHeaderDelegate> accessoryButtonTarget;
@property (retain, nonatomic) HFItemSection *itemSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_titleFont;
+ (BOOL)requiresConstraintBasedLayout;
+ (double)estimatedHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)updateUIForReachabilityState:(unsigned long long)a0;
- (void)accessoryButtonTapped;

@end
