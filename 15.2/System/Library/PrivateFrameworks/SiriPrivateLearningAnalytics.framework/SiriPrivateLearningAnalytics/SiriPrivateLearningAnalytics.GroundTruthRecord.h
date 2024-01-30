@class NSUUID, NSData, NSString;

@interface SiriPrivateLearningAnalytics.GroundTruthRecord : NSManagedObject

@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, copy) NSData *payload;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) double timestamp;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
