@class NSTimer;

@interface CNFRegAccountWebViewController : CNFRegServerWebViewController {
    BOOL _listeningForBagLoad;
    NSTimer *_bagLoadTimer;
}

@property (nonatomic) BOOL failedBagLoad;

- (id)bagKey;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_reload;
- (void)loadView;
- (id)logName;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithRegController:(id)a0;
- (BOOL)shouldSetHeadersForRequest:(id)a0;
- (void)setHeadersForRequest:(id)a0;
- (BOOL)canSendURLRequest:(id)a0;
- (void)receivedStatus:(int)a0 appleID:(id)a1 authID:(id)a2 authToken:(id)a3;
- (void)cancelTapped;
- (BOOL)_loadURLFromBag;
- (void)_startListeningForBagLoad;
- (void)_startBagLoadTimer;
- (void)_showURLDidNotLoadAlert;
- (void)_stopCurrentReload;
- (void)doHandoffWithStatus:(int)a0 appleID:(id)a1 authID:(id)a2 authToken:(id)a3;
- (id)clientInfoHeaderValue;
- (id)viewPortHeaderValue;
- (id)securityHeaderValue;
- (id)serviceHeaderValue;
- (id)interfaceLayoutHeaderValue;
- (void)_stopBagLoadTimer;
- (void)_stopListeningForBagLoad;
- (void)_bagLoadTimeout:(id)a0;
- (void)_handleFTServerBagFinishedLoading;
- (id)_viewPortStringForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_nonModalParentController;
- (id)_viewPortForFormSheetPresentation;
- (id)_viewPortForNormalPresentation;
- (void)completeHandoffWithStatus:(int)a0 appleID:(id)a1 authID:(id)a2 authToken:(id)a3;
- (void)_reloadDelayed;
- (void)_showGenericErrorWithHandler;
- (id)pushTokenHeaderValue;
- (id)authIdHeaderValue;
- (id)authTokenHeaderValue;

@end
