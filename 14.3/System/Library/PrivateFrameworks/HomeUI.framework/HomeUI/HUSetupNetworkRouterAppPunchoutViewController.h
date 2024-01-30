@class HULinkedApplicationItem, OBTrayButton, HFAppPunchoutRequest, HMSetupAccessoryDescription, NSString;
@protocol HFSetupPairingPopupDelegate;

@interface HUSetupNetworkRouterAppPunchoutViewController : OBWelcomeController <HFSetupPairingPopupAppPunchout>

@property (retain, nonatomic) HULinkedApplicationItem *linkedApplicationItem;
@property (readonly, nonatomic) OBTrayButton *punchoutButton;
@property (retain, nonatomic) HFAppPunchoutRequest *punchoutRequest;
@property (readonly, nonatomic) unsigned long long popupType;
@property (readonly, weak, nonatomic) id<HFSetupPairingPopupDelegate> popupDelegate;
@property (readonly, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_cancelPressed:(id)a0;
- (id)initWithPopupDelegate:(id)a0 setupAccessoryDescription:(id)a1;
- (void)_punchoutPressed:(id)a0;
- (void)_okPressed:(id)a0;
- (id)_lookUpSoftwareAndUpdateUI;

@end
