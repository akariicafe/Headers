@protocol DMCRFInteractionClient, DMCRFDeviceEnvironment, DMCRFSnapshotSource;

@interface DMCRFRestoreFlow : NSObject

@property (retain, nonatomic) id<DMCRFSnapshotSource> snapshotSource;
@property (retain, nonatomic) id<DMCRFInteractionClient> interactionClient;
@property (retain, nonatomic) id<DMCRFDeviceEnvironment> deviceEnvironment;
@property (copy, nonatomic) id /* block */ completion;

+ (id)_intersectionOfSet:(id)a0 set:(id)a1;

- (void).cxx_destruct;
- (id)initWithSnapshotSource:(id)a0 interactionClient:(id)a1 deviceEnvironment:(id)a2 completion:(id /* block */)a3;
- (void)startManagedRestoreWorkflow;
- (id)_appBundleIdentifiersSetDebugDescription:(id)a0;
- (void)_checkSnapshotForConflictingApps:(id)a0;
- (void)_compareAppsOnDeviceToAppBundleIdentifiers:(id)a0 fromSnapshot:(id)a1;
- (void)_handleSnapshots:(id)a0;
- (void)_restoreSnapshot:(id)a0 skippingApps:(id)a1;
- (void)_restoreSnapshotNoConflicts:(id)a0;

@end
