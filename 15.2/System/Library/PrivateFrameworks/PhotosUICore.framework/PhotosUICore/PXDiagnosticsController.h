@class UIWindow, NSArray, NSString, UITapGestureRecognizer;

@interface PXDiagnosticsController : NSObject <PXSettingsKeyObserver, UIGestureRecognizerDelegate>

@property (readonly, nonatomic) UIWindow *_window;
@property (readonly, nonatomic) NSArray *_diagnosticsServicesClasses;
@property (retain, nonatomic, setter=_setGestureRecognizer:) UITapGestureRecognizer *_gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)_handleGestureRecognizer:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_executeService:(id)a0;
- (id)currentItemProviders;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_loadDiagnosticsServicesClasses;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (id)_currentRootViewController;
- (void)presentContextualViewControllerForServices:(id)a0;
- (id)servicesWithItemProviders:(id)a0;
- (void)_updateGestureRecognizer;
- (void)setupOnInternalDevicesWithWindow:(id)a0;
- (void)_presentContextualViewControllerFromPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)presentContextualDiagnostics;
- (id)consoleDescriptionForServices:(id)a0;

@end
