@class NSArray, CKRecordID, NTPBPrivateRecordSyncState, NSString;
@protocol FCPrivateRecordSyncManagerDelegate;

@interface FCPrivateRecordSyncManager : NSObject <FCPrivateDataSyncManager>

@property (readonly, nonatomic) NSArray *desiredKeys;
@property (readonly, copy, nonatomic) NTPBPrivateRecordSyncState *currentState;
@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (weak, nonatomic) id<FCPrivateRecordSyncManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)notifyObservers;
- (BOOL)isDirty;
- (void)markAsDirty;
- (void)_stateDidChange;
- (BOOL)isAwaitingFirstSync;
- (void)fetchChangesWithContext:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithRecordID:(id)a0 desiredKeys:(id)a1 currentState:(id)a2;

@end
