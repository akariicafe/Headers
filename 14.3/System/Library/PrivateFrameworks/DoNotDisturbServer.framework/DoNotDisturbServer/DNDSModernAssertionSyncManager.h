@class NSString, NSDate, DNDSClientDetailsProvider, NSObject;
@protocol DNDSAssertionSyncManagerDataSource, DNDSSyncService, DNDSAssertionSyncManagerDelegate, OS_dispatch_queue;

@interface DNDSModernAssertionSyncManager : NSObject <DNDSSyncServiceDelegate, DNDSAssertionSyncManager> {
    NSObject<OS_dispatch_queue> *_queue;
    id<DNDSSyncService> _syncService;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    NSDate *_lastReceivedStoreDate;
    NSDate *_lastSentStoreDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DNDSAssertionSyncManagerDataSource> dataSource;
@property (weak, nonatomic) id<DNDSAssertionSyncManagerDelegate> delegate;

- (void).cxx_destruct;
- (void)resume;
- (void)updateForModeAssertionUpdateResult:(id)a0;
- (void)_queue_sendStateSnapshotToPairedDevice:(id)a0 force:(BOOL)a1;
- (void)_queue_handleMessage:(id)a0 withVersionNumber:(unsigned long long)a1;
- (void)syncService:(id)a0 didReceiveMessage:(id)a1 withVersionNumber:(unsigned long long)a2 fromDeviceIdentifier:(id)a3;
- (BOOL)syncService:(id)a0 shouldAcceptIncomingMessage:(id)a1 withVersionNumber:(unsigned long long)a2 fromDeviceIdentifier:(id)a3;
- (id)initWithClientDetailsProvider:(id)a0 syncService:(id)a1;

@end
