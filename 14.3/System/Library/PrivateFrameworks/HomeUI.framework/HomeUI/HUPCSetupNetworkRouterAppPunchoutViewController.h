@class HULinkedApplicationItem, PRXAction, HFAppPunchoutRequest, HMSetupAccessoryDescription, NSString;
@protocol HFSetupPairingPopupDelegate;

@interface HUPCSetupNetworkRouterAppPunchoutViewController : PRXCardContentViewController <HFSetupPairingPopupAppPunchout>

@property (retain, nonatomic) HULinkedApplicationItem *linkedApplicationItem;
@property (readonly, nonatomic) PRXAction *punchOutAction;
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
- (id)_lookUpSoftwareAndUpdateUI;

@end
