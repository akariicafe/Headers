@class HMHome, NSString, UIImageView, UILabel, NSMutableArray, UIButton;

@interface HUROARUpgradeView : UIView <HFHomeManagerObserver>

@property (retain, nonatomic) UIImageView *deviceImageView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subtitle;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (nonatomic) unsigned long long upgradeViewReason;
@property (retain, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_buttonAction;
- (id)_titleString;
- (id)_subtitleString;
- (id)initWithUpgradeViewReason:(unsigned long long)a0 home:(id)a1;
- (id)_buttonString;
- (void)_didSwitchToHome:(id)a0;
- (void)homeKitDispatcher:(id)a0 manager:(id)a1 didChangeHome:(id)a2;

@end
