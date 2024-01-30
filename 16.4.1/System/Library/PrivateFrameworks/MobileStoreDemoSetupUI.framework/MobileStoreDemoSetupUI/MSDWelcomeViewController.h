@class NSString, MSDSetupUIController;

@interface MSDWelcomeViewController : OBSetupAssistantSpinnerController <OBSetupAssistantSupport>

@property (retain, nonatomic) MSDSetupUIController *controller;
@property (nonatomic) unsigned long long activeNetworkInterface;
@property (retain, nonatomic) NSString *currentSSID;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)needsToRun:(id /* block */)a0;

- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)_checkIn;
- (void).cxx_destruct;
- (BOOL)_bothWifiAndCellularActive;
- (void)_quit;
- (void)_showCheckInErrorAlert;
- (void)_showNetworkInterfaceSelectionAlert;
- (void)_showNextView;

@end
