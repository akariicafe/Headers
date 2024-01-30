@interface PARFlushEvent : PAREvent <NSFetchRequestResult>

@property (nonatomic) int type;

- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void).cxx_destruct;

@end
