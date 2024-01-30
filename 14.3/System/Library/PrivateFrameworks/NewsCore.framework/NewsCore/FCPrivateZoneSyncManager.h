@class NSArray, NSString, CKRecordZoneID, NTPBPrivateZoneSyncState;
@protocol FCPrivateZoneSyncManagerDelegate;

@interface FCPrivateZoneSyncManager : NSObject <FCPrivateDataSyncManager>

@property (readonly, nonatomic) NSArray *desiredKeys;
@property (readonly, nonatomic) BOOL requiresBatchedSync;
@property (readonly, copy, nonatomic) NTPBPrivateZoneSyncState *currentState;
@property (readonly, copy, nonatomic) CKRecordZoneID *recordZoneID;
@property (weak, nonatomic) id<FCPrivateZoneSyncManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)notifyObservers;
- (BOOL)isDirty;
- (id)initWithRecordZoneID:(id)a0 desiredKeys:(id)a1 requiresBatchedSync:(BOOL)a2 currentState:(id)a3;
- (void)markAsDirty;
- (void)_stateDidChange;
- (BOOL)isAwaitingFirstSync;
- (void)fetchChangesWithContext:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;

@end
