@class CCUIContentModuleContext;

@interface CCUIConnectivityButtonViewController : CCUILabeledRoundButtonViewController {
    BOOL _observingStateChanges;
}

@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;

+ (BOOL)isSupported;

- (id)displayName;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)viewDidLoad;
- (void)startObservingStateChangesIfNecessary;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1;
- (void)stopObservingStateChanges;
- (void)stopObservingStateChangesIfNecessary;
- (id)statusText;
- (BOOL)_canShowWhileLocked;
- (id)initWithGlyphPackageDescription:(id)a0 highlightColor:(id)a1;
- (id)subtitleText;
- (void)buttonTapped:(id)a0;
- (void).cxx_destruct;
- (void)startObservingStateChanges;
- (void)containerWillTransitionToExpandedContentMode:(BOOL)a0;

@end
