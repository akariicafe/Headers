@class NSObject;
@protocol OS_dispatch_queue;

@interface ICDeviceAccessManager : NSObject {
    struct sqlite3 { } *_externalMediaAccessDB;
}

@property NSObject<OS_dispatch_queue> *deviceAccessQueue;

+ (id)sharedAccessManager;

- (id)init;
- (void)dealloc;
- (id)bundleIdentifiersAccessingExternalCameras;
- (void)revokeApplicationWithBundleIdentifier:(id)a0;
- (void)updateApplicationWithBundleIdentifier:(id)a0 withStatus:(BOOL)a1;
- (id)bundleIdentifiersAccessingExternalCamerasWithStatus;
- (void)addApplicationWithBundleIdentifier:(id)a0 whitelist:(BOOL)a1;
- (BOOL)validateBundleIdentifier:(id)a0 withNotification:(id)a1;
- (void)revokeControlApplicationWithBundleIdentifier:(id)a0;
- (BOOL)internalApplicationWithBundleIdentifierHasAccess:(id)a0;
- (BOOL)validateBundleIdentifierInstalled:(id)a0 control:(BOOL)a1;
- (BOOL)applicationWithBundleIdentifierHasAccess:(id)a0 enabled:(BOOL *)a1;
- (void)displayAlertForApplication:(id)a0 notificationDict:(id)a1 completionBlock:(id /* block */)a2;
- (id)bundleIdentifiersControllingExternalCameras;
- (BOOL)controlApplicationWithBundleIdentifierHasAccess:(id)a0;
- (void)addControlApplicationWithBundleIdentifier:(id)a0 whitelisted:(BOOL)a1;
- (BOOL)validateControlApplicationBundleIdentifier:(id)a0 withNotification:(id)a1;

@end
