@class NSString, HMSetupAccessoryDescription;
@protocol HFSetupPairingPopupDelegate;

@interface HUSetupNetworkRouterReplaceViewController : HUImageOBWelcomeController <HFSetupPairingPopup>

@property (readonly, nonatomic) unsigned long long popupType;
@property (readonly, weak, nonatomic) id<HFSetupPairingPopupDelegate> popupDelegate;
@property (readonly, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_replacePressed:(id)a0;
- (void)_cancelPressed:(id)a0;
- (id)initWithPopupDelegate:(id)a0 setupAccessoryDescription:(id)a1;

@end
