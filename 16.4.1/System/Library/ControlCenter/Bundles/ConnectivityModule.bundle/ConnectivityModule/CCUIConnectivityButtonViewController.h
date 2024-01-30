@class CCUIContentModuleContext;

@interface CCUIConnectivityButtonViewController : CCUILabeledRoundButtonViewController {
    BOOL _observingStateChanges;
}

@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;

+ (BOOL)isSupported;

- (void)buttonTapped:(id)a0;
- (void)startObservingStateChangesIfNecessary;
- (id)displayName;
- (void)stopObservingStateChangesIfNecessary;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1;
- (void)stopObservingStateChanges;
- (void)startObservingStateChanges;
- (id)initWithGlyphPackageDescription:(id)a0 highlightColor:(id)a1;
- (id)subtitleText;
- (BOOL)_canShowWhileLocked;
- (id)statusText;
- (void)containerWillTransitionToExpandedContentMode:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
