@class CACElementActionsPresentationManager, STVoiceControlStatusDomainPublisher, CACContainerViewController, NSOperationQueue, NSMutableSet, CACDictationRecognizerModeOverlayManager, CACDisambiguationPresentationManager, UIView, NSMutableArray, CACLabeledElementsOverlayManager, CACLabeledGridOverlayManager, CACVoiceOverAnnouncer, NSTimer, CACCorrectionPresentationManager, CACCustomCommandEditorPresentationManager, CACElementNamesOverlayManager, CACBannerViewPresenter, CACGestureLivePreviewOverlayManager, CACContextCluesPresentationManager, UIWindow;

@interface CACDisplayManager : NSObject <CACSimpleContentViewManagerDelegate, CACLabeledElementsOverlayManagerDelegate, CACLabeledGridOverlayManagerDelegate, CACDictationRecognizerModeOverlayManagerDelegate> {
    NSMutableArray *_registeredPresentationManagers;
    CACContainerViewController *_windowContainerViewController;
    CACContainerViewController *_overlayContainerViewController;
    NSOperationQueue *_messageDisplayOperationQueue;
    CACLabeledElementsOverlayManager *_labeledElementsOverlayManager;
    CACLabeledGridOverlayManager *_labeledGridOverlayManager;
    CACElementNamesOverlayManager *_elementNamesOverlayManager;
    CACGestureLivePreviewOverlayManager *_gestureLivePreviewOverlayManager;
    CACElementActionsPresentationManager *_elementActionsPresentationManager;
    CACCorrectionPresentationManager *_correctionPresentationManager;
    CACCustomCommandEditorPresentationManager *_customCommandEditorPresentationManager;
    CACDictationRecognizerModeOverlayManager *_dictationRecognizerModeOverlayManager;
    CACDisambiguationPresentationManager *_contactDisambiguationPresentationManager;
    CACContextCluesPresentationManager *_contextCluesPresentationManager;
    NSMutableSet *_modalAlerts;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _modalAlertsLock;
    CACVoiceOverAnnouncer *_voiceOverAnnouncer;
}

@property (retain, nonatomic) NSTimer *statusIndicatorAnimationTimer;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIWindow *overlayWindow;
@property (retain, nonatomic) CACBannerViewPresenter *bannerViewPresenter;
@property (readonly, nonatomic) CACLabeledElementsOverlayManager *labeledElementsOverlayManager;
@property (readonly, nonatomic) CACLabeledGridOverlayManager *labeledGridOverlayManager;
@property (readonly, nonatomic) CACElementNamesOverlayManager *elementNamesOverlayManager;
@property (readonly, nonatomic) CACElementActionsPresentationManager *elementActionsPresentationManager;
@property (readonly, nonatomic) CACCorrectionPresentationManager *correctionPresentationManager;
@property (readonly, nonatomic) CACCustomCommandEditorPresentationManager *customCommandEditorPresentationManager;
@property (readonly, nonatomic) CACDictationRecognizerModeOverlayManager *dictationRecognizerModeOverlayManager;
@property (readonly, nonatomic) CACGestureLivePreviewOverlayManager *gestureLivePreviewPresentationOverlayManager;
@property (readonly, nonatomic) CACDisambiguationPresentationManager *contactDisambiguationPresentationManager;
@property (readonly, nonatomic) CACContextCluesPresentationManager *contextCluesPresentationManager;
@property (readonly, nonatomic) CACVoiceOverAnnouncer *voiceOverAnnouncer;
@property (readonly, nonatomic) STVoiceControlStatusDomainPublisher *voiceControlStatusPublisher;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIView *overlayView;
@property (nonatomic) long long statusIndicatorType;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } defaultPortraitUpPointForGestures;

+ (void)initialize;
+ (id)sharedManager;
+ (double)durationToDisplayMessageString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)didUpdateOrientation;
- (BOOL)showsNumbersInTopLeftForLabeledGridOverlayManager:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })topLevelPortraitUpRectForLabeledGridOverlayManager:(id)a0;
- (BOOL)isAlwaysShowingLabeledGridOverlayManager:(id)a0;
- (BOOL)isOverlayFadingEnabledForLabeledGridOverlayManager:(id)a0;
- (double)overlayFadeDelayForLabeledGridOverlayManager:(id)a0;
- (float)overlayFadeOpacityForLabeledGridOverlayManager:(id)a0;
- (void)didUpdateElementsForLabeledGridOverlayManager:(id)a0;
- (BOOL)isPressOnFirstLevelEnabledForLabeledGridOverlayManager:(id)a0;
- (BOOL)isMaximumDensityEnabledForLabeledGridOverlayManager:(id)a0;
- (long long)defaultNumberOfColumnsForLabeledGridOverlayManager:(id)a0;
- (id)labeledGridOverlayManager:(id)a0 elementWithTitle:(id)a1 rectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)isZoomEnabledForGridOverlayManager:(id)a0;
- (int)modeForDictationRecognizerModeOverlayManager:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForDictationRecognizerModeOverlayManager:(id)a0;
- (void)showOverlayForDictiationRecognizerMode;
- (void)showCustomCommandEditorWithGesture:(id)a0;
- (void)showCustomCommandEditorWithTextToInsert:(id)a0;
- (void)showCustomCommandEditorWithRecordedUserActionFlow:(id)a0;
- (void)showCustomCommandEditorWithShortcutsWorkflow:(id)a0;
- (void)addPointsToLiveRecordingGesturePreviewByFingerIdentifier:(id)a0 forces:(id)a1 atTime:(double)a2;
- (void)removeTrackingForFingerIdentifier:(id)a0;
- (void)displayMessageString:(id)a0 type:(long long)a1 announcementCompletion:(id /* block */)a2;
- (void)contentViewManager:(id)a0 presentViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)contentViewManager:(id)a0 dismissViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)hideDictationRecognizerModeOverlayNow;
- (void)resetGridIdleTimer;
- (void)speakVoiceOverDescriptionForActiveOverlayIfNeeded;
- (void)startShowingTransientOverlayForType:(id)a0;
- (void)showContextCluesViewWithCommands:(id)a0;
- (void)hideAnyNonInteractiveOverlay;
- (void)hideAnyOverlayAnimated:(BOOL)a0 includeInteractiveOverlays:(BOOL)a1;
- (void)refreshOverlays;
- (BOOL)updateGridLayoutFromPreferences;
- (void)resetGrid;
- (void)displayMessageString:(id)a0 type:(long long)a1;
- (void)updatePreferencesFromCurrentGridLayoutForRows:(BOOL)a0 forColumns:(BOOL)a1;
- (void)updateGridLayoutWithNumberOfRows:(unsigned long long)a0 numberOfColumns:(unsigned long long)a1 shouldPreferRows:(BOOL)a2;
- (BOOL)updateGridWithPortraitUpRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showElementActionsForElement:(id)a0 usingPortraitUpRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isDisplayingAnyOverlay;
- (BOOL)isDisplayingAnyPresentation;
- (void)enableStatusBarOverride:(BOOL)a0;
- (void)hideAnyInProcessPresentation;
- (BOOL)isGridAtTopLevel;
- (id)labeledElementsForItemNumbers;
- (id)labeledElementsForGrid;
- (void)hideObsoletePresentationsIfNeededForElements:(id)a0;
- (BOOL)isDisplayingAnyInteractiveContentInProcess;
- (BOOL)isDisplayingAnyOutOfProcessPresentation;
- (void)displayReadyToUseWithLanguageMessage;
- (void)hideAnyOverlay;
- (void)updatePresentationForActiveOverlay;
- (void)presentModalAlertWithTitle:(id)a0 description:(id)a1 okButtonText:(id)a2 cancelButtonText:(id)a3 object:(id)a4 okButtonHandler:(id /* block */)a5;
- (void)showContactDisambiguationItems:(id)a0;
- (void)hideContactDisambiguation;
- (void)showCorrectionsForElement:(id)a0 nBestStrings:(id)a1;
- (void)showLiveRecordingGesturePreview;
- (void)hideLiveRecordingGesturePreview;
- (void)_updateForCurrentStatusIndicatorType;
- (void)_trackModalAlert:(id)a0;
- (void)_untrackModalAlert:(id)a0;
- (id)_containerViewControllerForViewController:(id)a0;
- (BOOL)isDisplayingCorrections;
- (void)hideAnyOverlayAnimated:(BOOL)a0;
- (void)hideAnyPresentationAnimated:(BOOL)a0 includingOutOfProcessPresentations:(BOOL)a1;
- (void)hideAnyPresentationAnimated:(BOOL)a0;
- (BOOL)_hasModalAlert;
- (void)_registerPresentationManager:(id)a0;
- (void)_installViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_uninstallViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)didAssignNumbersInLabeledElementsOverlayManager:(id)a0;
- (BOOL)isHandlingDisambiguationForLabeledElementsOverlayManager:(id)a0;
- (BOOL)shouldAssignNumbersRandomlyInLabeledElementsOverlayManager:(id)a0;
- (id)localeForLabeledElementsOverlayManager:(id)a0;
- (BOOL)isOverlayFadingEnabledForLabeledElementsOverlayManager:(id)a0;
- (double)overlayFadeDelayForLabeledElementsOverlayManager:(id)a0;
- (float)overlayFadeOpacityForLabeledElementsOverlayManager:(id)a0;
- (BOOL)isAlwaysShowingLabeledElementsOverlayManager:(id)a0;
- (long long)maximumLevelForLabeledGridOverlayManager:(id)a0;
- (id)existingOverlayManagerForType:(id)a0;
- (void)_showBannerViewWithText:(id)a0 type:(long long)a1;
- (void)presentModalAlertWithTitle:(id)a0 description:(id)a1 button1Text:(id)a2 button1Style:(long long)a3 button2Text:(id)a4 button2Style:(long long)a5 object:(id)a6 button1Handler:(id /* block */)a7 button2Handler:(id /* block */)a8;
- (void)hideAnyPresentation;
- (BOOL)isDisplayingAnyContentView;
- (void)hideCorrections;

@end
