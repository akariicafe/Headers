@class NSMutableArray, PSSpecifier, NSString, Logger, CoreTelephonyClient, PSListController;

@interface PSUINetworkSelectionSubgroup : NSObject <CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientRegistrationDelegate, PSSpecifierGroup> {
    Logger *_logger;
}

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *parentSpecifier;
@property (retain, nonatomic) CoreTelephonyClient *ctClient;
@property (retain, nonatomic) NSMutableArray *bundleControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)customerServiceProfileChanged:(id)a0 visible:(BOOL)a1;
- (void)willEnterForeground;
- (void)operatorNameChanged:(id)a0 name:(id)a1;
- (id)getLogger;
- (void).cxx_destruct;
- (void)networkSelected:(id)a0 success:(BOOL)a1 mode:(id)a2;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1 parentSpecifier:(id)a2;
- (void)reloadCellularNetworkSpecifier;
- (void)updateShowsCarrierSettingsMenuVisibility;
- (id)localizedCellularNetworkName:(id)a0;
- (BOOL)_showCarrier;
- (void)setShowsCarrierSettingsMenu:(BOOL)a0;

@end
