@class NSTimer, NSString, NSArray, NSMutableArray, UITapGestureRecognizer, NSDictionary, UIHoverGestureRecognizer, SBSetupManager, CSCoverSheetViewController, SBSetupRegulatoryInfoViewController, SBSetupWiFiScanner, SBActivationInfoViewController;

@interface SBDashBoardSetupViewController : CSCoverSheetViewControllerBase <CSEventHandling, UIGestureRecognizerDelegate> {
    SBSetupWiFiScanner *_wifiScanner;
    SBActivationInfoViewController *_activationInfoViewController;
    SBSetupRegulatoryInfoViewController *_regulatoryInfoViewController;
    SBSetupManager *_setupManager;
    CSCoverSheetViewController *_coverSheetViewController;
    NSString *_configureKey;
    NSString *_wifiPrimaryLanguage;
    NSString *_telephonyPrimaryLanguage;
    NSTimer *_cycleStartTimer;
    NSDictionary *_localizedStrings;
    NSDictionary *_storeRestrictedStrings;
    NSArray *_stringsOrdering;
    NSMutableArray *_currentStringsOrdering;
    unsigned long long _currentStringsIndex;
    BOOL _shouldResetOrderingOnNextCycle;
    BOOL _isCyclingComponents;
    unsigned long long _componentsToCycle;
    BOOL _isStoreRestricted;
    UITapGestureRecognizer *_pointerClickGestureRecognizer;
    UIHoverGestureRecognizer *_hoverGestureRecognizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoverSheetViewController:(id)a0;
- (long long)presentationPriority;
- (void)aggregateBehavior:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)aggregateAppearance:(id)a0;
- (long long)presentationType;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (BOOL)handleEvent:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)setupView;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)_isSecurityResearchDevice;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_infoButtonTapped:(id)a0;
- (void)_startWifiScan;
- (void)viewDidLoad;
- (void)_didClickHomeAffordance:(id)a0;
- (void)_handleHoverEvent:(id)a0;
- (void)_fetchLanguageFromTelephony;
- (unsigned long long)_componentsRelevantToPointerSuppression;
- (BOOL)isCyclingComponents:(unsigned long long)a0;
- (void)_stopCyclingComponents:(unsigned long long)a0;
- (void)_startCyclingComponents:(unsigned long long)a0 withDelay:(double)a1;
- (void)_cancelWifiScan;
- (void)_resetDisplayedLocalizedStringsImmediately:(BOOL)a0;
- (void)_animateComponentsForNewCycle;
- (void)_updateDisplayedStrings;
- (void)_incrementLocalizedStringsForNewCycle;
- (id)_importantLanguageIdentifiers;
- (id)_currentLanguageIdentifier;
- (id)_currentStringsDictionary;
- (id)_currentStoreRestrictedStringsDictionary;
- (void)_regulatoryInfoButtonTapped:(id)a0;
- (void)_updateWifiPrimaryLanguageFromDiscoveredCountryCodes:(id)a0;

@end
