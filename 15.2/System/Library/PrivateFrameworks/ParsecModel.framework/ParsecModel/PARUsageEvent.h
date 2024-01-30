@interface PARUsageEvent : PAREvent <NSFetchRequestResult>

@property (nonatomic) int clientIntVal;
@property (nonatomic) BOOL invokedDays;
@property (nonatomic) BOOL zkwEngagedDays;
@property (nonatomic) BOOL searchedDays;
@property (nonatomic) BOOL suggestionOrAppleResultEngagedDays;
@property (nonatomic) BOOL webEngagedDays;
@property (nonatomic) BOOL voiceSearchDays;
@property (nonatomic) int numSearchEngagements;
@property (nonatomic) BOOL activeDays;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void).cxx_destruct;
- (void).cxx_construct;

@end
