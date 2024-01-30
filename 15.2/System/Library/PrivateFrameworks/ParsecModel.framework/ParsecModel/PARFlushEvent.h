@interface PARFlushEvent : PAREvent <NSFetchRequestResult>

@property (nonatomic) int type;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void).cxx_destruct;
- (void).cxx_construct;

@end
