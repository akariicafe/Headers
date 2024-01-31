@class NSString, NSCKRecordMetadata, NSDate;

@interface NSCKRecordZoneMoveReceipt : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSString *recordName;
@property (retain, nonatomic) NSString *zoneName;
@property (retain, nonatomic) NSString *ownerName;
@property (nonatomic) BOOL needsCloudDelete;
@property (retain, nonatomic) NSDate *movedAt;
@property (retain, nonatomic) NSCKRecordMetadata *recordMetadata;

+ (id)moveReceiptsMatchingRecordIDs:(id)a0 inManagedObjectContext:(id)a1 persistentStore:(id)a2 error:(id *)a3;
+ (id)countMoveReceiptsInStore:(id)a0 matchingPredicate:(id)a1 withManagedObjectContext:(id)a2 error:(id *)a3;

- (id)createRecordIDForMovedRecord;

@end
