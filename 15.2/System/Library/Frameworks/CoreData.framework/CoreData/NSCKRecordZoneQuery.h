@class NSString, NSCKRecordZoneMetadata, NSPredicate, NSDate, CKQueryCursor;

@interface NSCKRecordZoneQuery : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSCKRecordZoneMetadata *recordZone;
@property (retain, nonatomic) NSString *recordType;
@property (retain, nonatomic) NSDate *lastFetchDate;
@property (retain, nonatomic) NSDate *mostRecentRecordModificationDate;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) CKQueryCursor *queryCursor;

@end
