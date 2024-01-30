@class NSString, NSUUID, NSData, NSDate;

@interface MapsSyncManagedRAPRecord : NSManagedObject

@property (nonatomic, copy) NSData *contentData;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *reportId;
@property (nonatomic) short status;
@property (nonatomic, copy) NSDate *statusLastUpdatedDate;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic) short type;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
