@class NSDate;

@interface PARImagesPropensity : NSManagedObject <NSFetchRequestResult>

@property (nonatomic) short image;
@property (nonatomic) short other;
@property (nonatomic) short querySuggestion;
@property (nonatomic) short recentResult;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic) short zkw;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void).cxx_destruct;
- (void).cxx_construct;

@end
