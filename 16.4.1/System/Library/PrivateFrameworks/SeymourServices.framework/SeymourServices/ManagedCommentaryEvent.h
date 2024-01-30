@class NSString, NSSet;

@interface ManagedCommentaryEvent : NSManagedObject

@property (nonatomic) double duration;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSString *topic;
@property (nonatomic, copy) NSString *topicIdentifier;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
