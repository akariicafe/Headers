@class NSUUID, NSString, NSDate;

@interface MapsSyncManagedIncidentReport : NSManagedObject

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;
@property (nonatomic) short type;
@property (nonatomic, copy) NSString *countryCode;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
