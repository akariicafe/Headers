@class NSString, ManagedScoreSummary, NSDate;

@interface ManagedArchivedSession : NSManagedObject

@property (nonatomic) int activityType;
@property (nonatomic) double duration;
@property (nonatomic) double percentageCompleted;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSString *watchConnectionState;
@property (nonatomic, copy) NSString *workoutIdentifier;
@property (nonatomic, retain) ManagedScoreSummary *scoreSummary;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
