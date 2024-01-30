@class NSObject;
@protocol OS_dispatch_queue;

@interface ICDeviceAccessManager : NSObject {
    struct sqlite3 { } *_externalMediaAccessDB;
}

@property NSObject<OS_dispatch_queue> *deviceAccessQueue;

+ (id)sharedAccessManager;

- (void)dealloc;
- (id)init;
- (void)addApplicationWithBundleIdentifier:(id)a0 whitelist:(BOOL)a1;
- (void)addControlApplicationWithBundleIdentifier:(id)a0 whitelisted:(BOOL)a1;
- (BOOL)applicationWithBundleIdentifierHasAccess:(id)a0 enabled:(BOOL *)a1;
- (id)bundleIdentifiersAccessingExternalCameras;
- (id)bundleIdentifiersAccessingExternalCamerasWithStatus;
- (id)bundleIdentifiersControllingExternalCameras;
- (BOOL)controlApplicationWithBundleIdentifierHasAccess:(id)a0;
- (void)displayAlertForApplication:(id)a0 notificationDict:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)internalApplicationWithBundleIdentifierHasAccess:(id)a0;
- (void)revokeApplicationWithBundleIdentifier:(id)a0;
- (void)revokeControlApplicationWithBundleIdentifier:(id)a0;
- (void)updateApplicationWithBundleIdentifier:(id)a0 withStatus:(BOOL)a1;
- (BOOL)validateBundleIdentifier:(id)a0 withNotification:(id)a1;
- (BOOL)validateBundleIdentifierInstalled:(id)a0 control:(BOOL)a1;
- (BOOL)validateControlApplicationBundleIdentifier:(id)a0 withNotification:(id)a1;

@end
