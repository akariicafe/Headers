@class NSArray;

@interface CKSyncEngineBatch : NSObject

@property (retain, nonatomic) NSArray *savedRecords;
@property (retain, nonatomic) NSArray *deletedRecordIDs;
@property (readonly, nonatomic) NSArray *recordsToSave;
@property (readonly, nonatomic) NSArray *recordIDsToDelete;
@property (nonatomic, getter=isAtomic) BOOL atomic;

- (id)initWithRecordsToSave:(id)a0 recordIDsToDelete:(id)a1;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)description;
- (void).cxx_destruct;

@end
