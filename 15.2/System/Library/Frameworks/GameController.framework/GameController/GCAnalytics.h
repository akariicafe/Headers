@class NSString, NSMutableDictionary, NSTimer;

@interface GCAnalytics : NSObject {
    NSMutableDictionary *_controllersData;
    NSString *_bundleID;
    NSTimer *_eventPollTimer;
}

+ (id)instance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)getBundleID;
- (void)sendInputsPressedEvent:(const struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; } *)a0;
- (void)runInputPollTimer;
- (void)checkMultipleControllers;
- (void)publishController:(id)a0;
- (void)unpublishController:(id)a0;
- (void)onSiriMotionEnabled;
- (void)sendSettingsEnteredEvent;
- (void)sendSettingsCustomizationsToggledEventForBundleID:(id)a0 productCategory:(id)a1 toggledOn:(BOOL)a2;
- (void)sendSettingsCustomizationsResetEventForBundleID:(id)a0 productCategory:(id)a1;
- (void)sendSettingsButtonCustomizedEventForBundleID:(id)a0 productCategory:(id)a1 button:(id)a2;
- (void)sendSettingsIdentifyControllerEventForProductCategory:(id)a0;
- (void)sendSettingsDevicesEventForTotalCustomizedControllersCount:(int)a0;
- (void)sendSettingsCustomizedAppsEventForTotalCustomizedAppsCount:(int)a0;
- (void)sendSettingsRPKitGesturesCustomized:(id)a0 from:(id)a1;
- (void)sendRPKitScreenshotSavedEventForBundleID:(id)a0 productCategory:(id)a1;
- (void)sendRPKitManualRecordingSavedEventForBundleID:(id)a0 productCategory:(id)a1 duration:(int)a2;
- (void)sendRPKitInstantCaptureSavedEventForBundleID:(id)a0 productCategory:(id)a1;
- (void)sendRPKitInstantCaptureBufferStartedEventForBundleID:(id)a0;
- (void)sendHapticsEngineCreatedEventForBundleID:(id)a0 productCategory:(id)a1 hapticsLocality:(id)a2;
- (void)sendHapticsClientDestroyedEventForBundleID:(id)a0 productCategory:(id)a1 totalPlayers:(int)a2 sessionTotalDuration:(int)a3 sessionActiveDuration:(int)a4 terminationReason:(id)a5;
- (void)sendHapticsPlayerDestroyedEventForBundleID:(id)a0 productCategory:(id)a1 totalEventsProcessed:(int)a2 transientEventsProcessed:(int)a3 continuousEventsProcessed:(int)a4 parameterCurvesProcessed:(int)a5 sessionTotalDuration:(int)a6 sessionActiveDuration:(int)a7;
- (void)sendHapticsErrorRaisedEventFromSource:(id)a0 productCategory:(id)a1 errorType:(id)a2;

@end
