@class CCUIContentModuleContext;

@interface CCUIConnectivityButtonViewController : CCUILabeledRoundButtonViewController {
    BOOL _observingStateChanges;
}

@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;

+ (BOOL)isSupported;

- (void)containerWillTransitionToExpandedContentMode:(BOOL)a0;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)startObservingStateChanges;
- (void)startObservingStateChangesIfNecessary;
- (void)buttonTapped:(id)a0;
- (void)viewDidLoad;
- (id)statusText;
- (id)subtitleText;
- (void)stopObservingStateChangesIfNecessary;
- (void)stopObservingStateChanges;
- (id)initWithGlyphPackageDescription:(id)a0 highlightColor:(id)a1;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)displayName;

@end
