@class NSString, NSMutableDictionary, NSNumber, NSObject;
@protocol CKVDatabaseReadWriteAccess;

@interface CKVFTSRecordUpdater : NSObject {
    NSObject<CKVDatabaseReadWriteAccess> *_database;
    NSString *_originAppId;
    NSNumber *_itemTypeNumber;
    NSMutableDictionary *_commandCache;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)insertRecordsFromItem:(id)a0 recordId:(id)a1;
- (BOOL)deleteDataset;
- (BOOL)deleteRecordId:(id)a0;
- (id)initWithDatabase:(id)a0 originApp:(id)a1 itemType:(long long)a2;
- (BOOL)deleteRecordIds:(id)a0;

@end
