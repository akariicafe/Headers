@class NSString, NSData, NSDate, NSNumber;

@interface _DKChangeSetMO : NSManagedObject

@property (retain, nonatomic) NSData *changeSet;
@property (copy, nonatomic) NSString *ckForeignKey;
@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSNumber *sequenceNumber;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSNumber *version;

@end
