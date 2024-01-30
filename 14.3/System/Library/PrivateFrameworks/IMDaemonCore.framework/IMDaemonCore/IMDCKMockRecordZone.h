@class NSString, IDSKVStore, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKMockRecordZone : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSKVStore *recordStore;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void)handleOperation:(id)a0;
- (id)_kvStorePath;
- (void)_handleFetchZoneChangesOperation:(id)a0;
- (void)_handleModifyRecordsOperation:(id)a0;
- (id)_fetchRecordZoneChangesOptionsFromOperation:(id)a0;
- (unsigned long long)_fetchResultLimit:(id)a0;
- (id)_ckRecordFromData:(id)a0;
- (id)_serializedCKRecordData:(id)a0;

@end
