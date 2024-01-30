@class NSString, UITextField, UIActivityIndicatorView, AMSBTLEAdvertisementManager, NSTimer;

@interface CABTMIDILocalPeripheralViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate> {
    AMSBTLEAdvertisementManager *advertisingManager;
    NSString *statusString;
    UITextField *serviceNameField;
    BOOL advertising;
    BOOL isErrorMessage;
    UIActivityIndicatorView *indicator;
    NSString *theServiceName;
    long long advertiseTimeout;
    long long fullRefreshCounter;
    NSTimer *advertiseTimer;
    NSTimer *messageTimer;
    BOOL didCleanup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)didReceiveMemoryWarning;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)statusString;
- (void)cleanup;
- (id)title;
- (void)loadView;
- (void)activateController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)textFieldDidEndEditing:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)stopTimers;
- (id)advertisedServiceName;
- (void)advertiseTimerFired:(id)a0;
- (void)updateAdvertiseUI;
- (void)deactivateController:(id)a0;
- (BOOL)advertiseServiceWithName:(id)a0 completionBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)stopAdvertisingServiceWithCompletionBlock:(id /* block */)a0 error:(id *)a1;
- (void)setStatusString:(id)a0 animateIndicator:(BOOL)a1 isError:(BOOL)a2;
- (void)textFieldDone:(id)a0;
- (void)advertiseServiceSwitchToggled:(id)a0;
- (BOOL)changeServiceNameTo:(id)a0 completionBlock:(id /* block */)a1 error:(id *)a2;
- (void)messageTimerFired:(id)a0;
- (BOOL)disconnectLocalPeripheral;

@end
