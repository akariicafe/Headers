@class NSString, NSCKRecordZoneMetadata, NSPredicate, NSDate, CKQueryCursor;

@interface NSCKRecordZoneQuery : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSCKRecordZoneMetadata *recordZone;
@property (retain, nonatomic) NSString *recordType;
@property (retain, nonatomic) NSDate *lastFetchDate;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) CKQueryCursor *queryCursor;

+ (id)zoneQueryForRecordType:(id)a0 inZone:(id)a1 inStore:(id)a2 managedObjectContext:(id)a3 error:(id *)a4;

- (id)createQueryForUpdatingRecords;

@end
