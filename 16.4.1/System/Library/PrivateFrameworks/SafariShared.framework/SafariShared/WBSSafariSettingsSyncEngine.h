@class WBSDiagnosticStateCollector, NSObject;
@protocol OS_dispatch_queue;

@interface WBSSafariSettingsSyncEngine : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSDiagnosticStateCollector *_stateCollector;
}

- (void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)triggerImmediateBackgroundImageSaveIfApplicable;
- (BOOL)syncEnabled;
- (id)init;
- (void).cxx_destruct;
- (void)scheduleCloudBackgroundImageSaveWithURL:(id)a0 isLightAppearance:(BOOL)a1 successCompletionHandler:(id /* block */)a2;
- (void)syncSettingsDownWithCompletion:(id /* block */)a0;
- (void)registerDiagnosticInfo:(id)a0;
- (void)registerDiagnosticWithPayloadProvider:(id /* block */)a0;
- (void)saveSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (void)syncPerSiteSettingsDownWithCompletion:(id /* block */)a0;
- (void)syncPerSiteSettingsUpWithCompletion:(id /* block */)a0;
- (void)syncSettingsUpWithCompletion:(id /* block */)a0;

@end
