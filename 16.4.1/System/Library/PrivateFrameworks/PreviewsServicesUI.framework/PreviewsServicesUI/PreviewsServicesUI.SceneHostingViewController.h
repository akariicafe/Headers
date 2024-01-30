@interface PreviewsServicesUI.SceneHostingViewController : UIViewController {
    void /* unknown type, empty encoding */ deactivatedHandler;
    void /* unknown type, empty encoding */ isUserActivePreview;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ currentActivationRequest;
    void /* unknown type, empty encoding */ firstResponderStatus;
    void /* unknown type, empty encoding */ sceneObservationToken;
    void /* unknown type, empty encoding */ readyForDisplay;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (BOOL)becomeFirstResponder;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)resignFirstResponder;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
