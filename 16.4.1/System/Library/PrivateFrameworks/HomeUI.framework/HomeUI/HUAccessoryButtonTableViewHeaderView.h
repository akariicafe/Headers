@class UIFont, NSString, HFItemSection, UIButton;

@interface HUAccessoryButtonTableViewHeaderView : UITableViewHeaderFooterView <HFItemSectionAccessoryButtonHeader>

@property (retain, nonatomic) UIButton *accessoryButton;
@property (retain, nonatomic) NSString *overrideAccessoryButtonTitle;
@property (retain, nonatomic) UIFont *accessoryButtonFont;
@property (retain, nonatomic) HFItemSection *itemSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void)updateConstraints;
- (id)initWithReuseIdentifier:(id)a0;
- (void)accessoryButtonPressed;
- (void).cxx_destruct;
- (id)defaultAccessoryButtonFont;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
