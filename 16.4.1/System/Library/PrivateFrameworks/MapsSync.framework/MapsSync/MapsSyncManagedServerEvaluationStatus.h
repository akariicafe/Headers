@class NSUUID, NSDate;

@interface MapsSyncManagedServerEvaluationStatus : NSManagedObject

@property (nonatomic) BOOL arpStatus;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;
@property (nonatomic) BOOL rapStatus;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
