@class NSArray;

@interface CKSyncEngineBatch : NSObject

@property (copy) NSArray *savedRecords;
@property (copy) NSArray *deletedRecordIDs;
@property (getter=isCustomBatch) BOOL customBatch;
@property (readonly, copy) NSArray *recordsToSave;
@property (readonly, copy) NSArray *recordIDsToDelete;
@property (getter=isAtomic) BOOL atomic;

+ (void)initialize;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)initWithRecordsToSave:(id)a0 recordIDsToDelete:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
