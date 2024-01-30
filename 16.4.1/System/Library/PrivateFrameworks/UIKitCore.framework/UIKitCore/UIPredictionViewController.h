@class NSString, NSArray, NSTimer, TUIPredictionView, NSDate, TIAutocorrectionList;

@interface UIPredictionViewController : UIViewController <TUIPredictionViewDelegate, UIKeyboardAutocorrectionObserver, UIPredictiveViewController> {
    NSTimer *_updateUITimer;
    NSDate *_lastUIUpdateTime;
}

@property (retain, nonatomic) TIAutocorrectionList *cachedAutocorrectionList;
@property (readonly, nonatomic) TUIPredictionView *predictionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *displayedCandidates;

- (void)_registerForNotifications;
- (void)autocorrectionControllerDidClearAutocorrections:(id)a0;
- (BOOL)_autocorrectionListContainsContinuousPathConversions:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (double)preferredHeightForTraitCollection:(id)a0;
- (BOOL)hidesExpandableButton;
- (void)_inputModeDidChange;
- (void)_updateAutocorrectionList:(id)a0;
- (void)autocorrectionController:(id)a0 didUpdateAutocorrectionList:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)_registerAsAutocorrectionObserver;
- (id)_currentTextSuggestions;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (void)predictionView:(id)a0 didSelectCandidate:(id)a1;
- (BOOL)_isVisibleForAutocorrectionType:(long long)a0;
- (BOOL)_autocorrectionListMayCausePredictionViewToReappear:(id)a0;
- (void)_performThrottledUpdateUIWithAutocorrectionList:(id)a0;
- (void)_clearTextSuggestions;
- (void)dealloc;
- (void)_inputResponderDidChangeNotification:(id)a0;
- (BOOL)requiresKeyboard;
- (void).cxx_destruct;
- (void)_throttledUpdateUIWithAutocorrectionList:(id)a0;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;

@end
