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
- (BOOL)_autocorrectionListContainsContinuousPathConversions:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)hidesExpandableButton;
- (BOOL)_canShowWhileLocked;
- (void)_clearTextSuggestions;
- (void)_inputResponderDidChangeNotification:(id)a0;
- (void)loadView;
- (void)_inputModeDidChange;
- (void)_performThrottledUpdateUIWithAutocorrectionList:(id)a0;
- (void)_throttledUpdateUIWithAutocorrectionList:(id)a0;
- (void)_registerAsAutocorrectionObserver;
- (BOOL)_isVisibleForAutocorrectionType:(long long)a0;
- (void).cxx_destruct;
- (void)autocorrectionControllerDidClearAutocorrections:(id)a0;
- (void)predictionView:(id)a0 didSelectCandidate:(id)a1;
- (double)preferredHeightForTraitCollection:(id)a0;
- (id)_currentTextSuggestions;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateAutocorrectionList:(id)a0;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (BOOL)_autocorrectionListMayCausePredictionViewToReappear:(id)a0;
- (void)autocorrectionController:(id)a0 didUpdateAutocorrectionList:(id)a1;

@end
