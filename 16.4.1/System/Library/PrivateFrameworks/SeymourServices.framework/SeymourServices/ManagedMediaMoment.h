@class NSData, NSString, NSSet;

@interface ManagedMediaMoment : NSManagedObject

@property (nonatomic, copy) NSData *artwork;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double startTime;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
