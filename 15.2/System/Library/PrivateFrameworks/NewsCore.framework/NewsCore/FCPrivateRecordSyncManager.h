@class NSString, CKRecordID, NSArray, NTPBPrivateRecordSyncState;
@protocol FCPrivateRecordSyncManagerDelegate;

@interface FCPrivateRecordSyncManager : NSObject <FCPrivateDataSyncManager> {
    CKRecordID *_recordID;
    id<FCPrivateRecordSyncManagerDelegate> _delegate;
    NSArray *_desiredKeys;
    NTPBPrivateRecordSyncState *_currentState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyObservers;
- (BOOL)isAwaitingFirstSync;
- (void)fetchChangesWithContext:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)isDirty;
- (void)markAsDirty;
- (void).cxx_destruct;
- (id)init;

@end
