@class UILabel, UISwitch, MTMaterialView;

@interface SBTodayKeepOnHomeScreenPlatterView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UISwitch *pinnedSwitch;
@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (nonatomic, getter=isPinned) BOOL pinned;

- (void).cxx_destruct;
- (id)traitCollection;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_pinnedSwitchValueChanged:(id)a0;

@end
