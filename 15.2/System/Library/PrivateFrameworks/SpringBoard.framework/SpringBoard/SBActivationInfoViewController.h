@class _UILegibilitySettings, NSArray, NSString, UITableView, UIView, NSLayoutConstraint, UIButton;

@interface SBActivationInfoViewController : UIViewController <STTelephonyStateObserver, UITableViewDataSource, UITableViewDelegate> {
    NSString *_meid;
    NSString *_serial;
    NSArray *_mobileSubscriptionInfo;
    UIView *_containerView;
    UITableView *_activationInfoTableView;
    NSLayoutConstraint *_activationInfoTableViewHeight;
}

@property (retain, nonatomic) NSArray *mobileEquipmentInfo;
@property (readonly, nonatomic) UIButton *regulatoryInfoButton;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)mobileEquipmentInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)subscriptionInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (id)_titleForHeaderInSection:(long long)a0;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)_updateMobileEquipmentInfo;
- (void)_telephonyStateChanged;
- (id)_activationInfoCell;
- (id)_backgroundViewForHeaderView:(id)a0;
- (id)_processMobileEquipmentInfo:(id)a0;
- (id)_processMobileSubscriptionInfo;
- (id)_processDeviceInfo;
- (id)_formattedIMEI:(id)a0;
- (id)_formattedCSN:(id)a0;
- (id)_formattedICCID:(id)a0;
- (id)_formattedString:(id)a0 withSpaceAfterDigits:(unsigned long long)a1;

@end
