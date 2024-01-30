@class NSString, OBLinkTrayButton, WLWelcomeController;

@interface WLPairingCodeViewController : WLOnboardingViewController <OBSetupAssistantSupport> {
    NSString *_wifiPSK;
    NSString *_ssid;
    WLWelcomeController *_welcomeController;
    OBLinkTrayButton *_appleInternalOptionsButton;
}

@property (nonatomic) BOOL showCancelButton;
@property (copy, nonatomic) id /* block */ viewWillDisappearBlock;
@property (copy, nonatomic) id /* block */ getLocalImportOptionsHandler;
@property (copy, nonatomic) id /* block */ stashDataLocallyHandler;
@property (copy, nonatomic) id /* block */ importLocalContentHandler;
@property (copy, nonatomic) id /* block */ viewWillDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)_appleInternalOptionsTapped:(id)a0;
- (void)_setStashDataLocally:(BOOL)a0;
- (void)_importLocalContent;
- (id)initWithPairingCode:(id)a0 wifiPSK:(id)a1 ssid:(id)a2 welcomeController:(id)a3;

@end
