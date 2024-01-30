@class PSUICarrierItemGroup, PSUICellularDataPlanListGroup, PSUICellularDataPlanSetupGroup, CoreTelephonyClient, PSUISubscriptionContextMenusGroup, PSUICellularDataSpecifier, PSUICellularUsageSchedulingGroup, PSUICellularDataOptionsController, PSUICellularPlanListGroup, NSString, PSSpecifier, PSUICellularDataPlanDetailGroup;

@interface PSUICellularController : PSListController <CoreTelephonyClientSubscriberDelegate> {
    PSSpecifier *_viewAccount;
    PSSpecifier *_viewAccountGroup;
    PSSpecifier *_facetimeSetupButton;
    PSSpecifier *_facetimeSetupGroup;
    BOOL _disabled;
    BOOL _ignoreNextEntitlementStatusChange;
    PSSpecifier *_personalHotspotSpecifier;
    PSSpecifier *_fauxCardSpecifier;
    BOOL _shouldCalculateDataUsage;
}

@property (retain, nonatomic) PSUICellularDataSpecifier *cellularDataSpecifier;
@property (retain, nonatomic) PSUICellularDataOptionsController *cellularDataOptionsController;
@property (retain, nonatomic) PSUICellularDataPlanSetupGroup *cellularDataPlanSetupGroup;
@property (retain, nonatomic) PSUICellularDataPlanListGroup *cellularDataPlanListGroup;
@property (retain, nonatomic) PSUICellularDataPlanDetailGroup *cellularDataPlanDetailGroup;
@property (retain, nonatomic) PSUICellularPlanListGroup *cellularPlanListGroup;
@property (retain, nonatomic) PSUICarrierItemGroup *cellularNewNetworkGroup;
@property (retain, nonatomic) PSUISubscriptionContextMenusGroup *subscriptionContextMenus;
@property (retain, nonatomic) PSUICellularUsageSchedulingGroup *appUsageGroup;
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (id)getTetheringStatus:(id)a0;
- (void)handleURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (void)prefetchResourcesFor:(id)a0;
- (void)dealloc;
- (id)specifiers;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)selectSpecifier:(id)a0;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)newCarrierNotification;
- (void)entitlementStatusChanged;
- (void)cellularPlanChanged:(id)a0;
- (void)wirelessDataUsageChangedNotification;
- (void)carrierItemsChanged;
- (void)cellularDataSettingChanged;
- (void)wirelessDataUsageCacheRefreshed;
- (id)_deadTelephonySpecifiers;
- (void)retryCarrierListFetch:(id)a0;
- (BOOL)shouldShowFaceTimeSetup;
- (BOOL)shouldShowViewAccount;
- (id)appUsageGroupTitle;
- (BOOL)isCellularDisabled;
- (id)activeDataPlanLabel;
- (BOOL)showDataPlanOnly;
- (id)removePlanConfirmationTitle:(id)a0;
- (id)removePlanConfirmationMessage:(id)a0;
- (void)updatePaneWithCellularDataState:(BOOL)a0;
- (void)learnMoreLinkTapped;
- (void)turnOnLocationServicesPressed:(id)a0;
- (id)cellularDataOptionsDetailText:(id)a0;
- (void)viewAccountPressed:(id)a0;
- (void)setupCellularFaceTime:(id)a0;

@end
