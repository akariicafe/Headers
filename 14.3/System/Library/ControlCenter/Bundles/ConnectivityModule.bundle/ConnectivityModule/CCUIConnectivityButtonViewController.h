@class CCUIContentModuleContext;

@interface CCUIConnectivityButtonViewController : CCUILabeledRoundButtonViewController {
    BOOL _observingStateChanges;
}

@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;

+ (BOOL)isSupported;

- (id)subtitleText;
- (id)initWithGlyphPackageDescription:(id)a0 highlightColor:(id)a1;
- (void)containerWillTransitionToExpandedContentMode:(BOOL)a0;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1;
- (id)statusText;
- (void).cxx_destruct;
- (void)stopObservingStateChangesIfNecessary;
- (void)startObservingStateChangesIfNecessary;
- (void)buttonTapped:(id)a0;
- (void)startObservingStateChanges;
- (void)stopObservingStateChanges;
- (BOOL)_canShowWhileLocked;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)viewDidLoad;
- (id)displayName;

@end
