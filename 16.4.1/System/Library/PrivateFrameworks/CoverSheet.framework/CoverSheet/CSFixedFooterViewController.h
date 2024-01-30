@class NSString, CSStatusTextViewController, CSFixedFooterView;
@protocol SBFAuthenticationStatusProvider;

@interface CSFixedFooterViewController : CSCoverSheetViewControllerBase <CSStatusTextViewControllerDelegate> {
    CSStatusTextViewController *_statusTextViewController;
    NSString *_cachedMesaFailureText;
    BOOL _temporaryMesaFailureTextActive;
    BOOL _authenticatedSinceFingerOn;
}

@property (retain, nonatomic) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;
@property (readonly, nonatomic) CSFixedFooterView *fixedFooterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (BOOL)handleEvent:(id)a0;
- (void)updateCallToActionForMesaMatchFailure;
- (void)viewDidLoad;
- (void)updateCallToActionForReversingInteractiveTransition;
- (void)coverSheetStatusTextViewControllerContentDidChange:(id)a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_addStatusTextViewControllerIfNecessary;
- (void).cxx_destruct;
- (void)_updateCallToActionTextAnimated:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;

@end
