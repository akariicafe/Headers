@class UITableView, NSString, NSArray, UIView, NSLayoutConstraint, UIButton;

@interface SBActivationInfoViewController : UIViewController <STTelephonyStateObserver, UITableViewDataSource, UITableViewDelegate> {
    NSString *_meid;
    NSString *_serial;
    NSArray *_mobileEquipmentInfo;
    NSArray *_mobileSubscriptionInfo;
    UIView *_containerView;
    UITableView *_activationInfoTableView;
    NSLayoutConstraint *_activationInfoTableViewHeight;
}

@property (readonly, nonatomic) UIButton *regulatoryInfoButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)subscriptionInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (void)mobileEquipmentInfoDidChangeForStateProvider:(id)a0 slot:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)_titleForHeaderInSection:(long long)a0;
- (BOOL)_canShowWhileLocked;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
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
