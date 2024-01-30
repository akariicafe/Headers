@class NSString, NPSManager, NPSDomainAccessor, NSObject, DNDSClientDetailsProvider;
@protocol DNDSAssertionSyncManagerDelegate, DNDSLegacyAssertionSyncManagerDataSource, OS_dispatch_queue;

@interface DNDSLegacyAssertionSyncManager : NSObject <DNDSAssertionSyncManager> {
    NSObject<OS_dispatch_queue> *_queue;
    NPSManager *_npsManager;
    NPSDomainAccessor *_accessor;
    DNDSClientDetailsProvider *_clientDetailsProvider;
}

@property (weak, nonatomic) id<DNDSLegacyAssertionSyncManagerDataSource> dataSource;
@property (weak, nonatomic) id<DNDSAssertionSyncManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cleanupState;

- (void).cxx_destruct;
- (void)dealloc;
- (void)resume;
- (void)_endMonitoringForChanges;
- (void)_beginMonitoringForChanges;
- (void)_updateForReason:(unsigned long long)a0;
- (void)_queue_updateToggleSyncForReason:(unsigned long long)a0;
- (void)_queue_updateGizmoAssertionSyncWithModeAssertionUpdateContext:(id)a0;
- (id)_queue_gizmoUpdateDate;
- (BOOL)_queue_updateCompanionToggleSyncForGizmoUpdateDate:(id)a0 modeAssertionUpdateContext:(id)a1;
- (void)_queue_updateGizmoToggleSyncForState:(id)a0 companionUpdateDate:(id)a1 reason:(unsigned long long)a2;
- (void)_queue_updateCompanionAssertionMirroringForState:(id)a0;
- (void)updateForStateUpdate:(id)a0;
- (id)initWithClientDetailsProvider:(id)a0 pairedDevice:(id)a1;
- (void)_updateGizmoAssertionSync;

@end
