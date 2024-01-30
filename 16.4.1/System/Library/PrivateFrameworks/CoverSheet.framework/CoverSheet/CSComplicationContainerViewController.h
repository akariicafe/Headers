@class UIColor, NSMutableDictionary, NSArray, NSString, CSComplicationManager, BSUIVibrancyConfiguration;
@protocol CSComplicationContainerViewControllerDelegate;

@interface CSComplicationContainerViewController : CSCoverSheetViewControllerBase <CHUISWidgetHostViewControllerDelegate, SBFBacklightSceneHostEnvironmentProviding>

@property (retain, nonatomic) CSComplicationManager *complicationManager;
@property (retain, nonatomic) NSMutableDictionary *widgetViewControllersByUniqueIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cancelTouchesAssertionsByUniqueIdentifier;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) NSArray *widgetDescriptors;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (weak, nonatomic) id<CSComplicationContainerViewControllerDelegate> delegate;
@property (nonatomic) BOOL screenOff;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)interpretsViewAsContent:(id)a0;
- (void)widgetHostViewController:(id)a0 requestsLaunchWithAction:(id)a1;
- (id)_hostViewControllerForComplicationDescriptor:(id)a0;
- (id)_widgetTintParameters;
- (void)_setWidgetViewControllersToPresentationMode:(unsigned long long)a0;
- (void)_layoutModularComplications;
- (void)setVisible:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (id)_inlineComplicationDescriptorIfSolo;
- (void)endCancellingTouches;
- (void)beginCancellingTouches;
- (id)sceneHostEnvironmentEntriesForBacklightSession;
- (void)handleComplicationSelectionGesture:(id)a0;
- (void)_setTextParametersAndFontForWidgetController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_layoutInlineComplication;
- (id)initWithComplicationManager:(id)a0 forLandscapeOrientation:(BOOL)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;

@end
