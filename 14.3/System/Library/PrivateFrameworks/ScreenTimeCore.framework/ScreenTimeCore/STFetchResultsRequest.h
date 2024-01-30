@class NSFetchRequest;

@interface STFetchResultsRequest : NSObject

@property (readonly, nonatomic) NSFetchRequest *fetchRequest;

+ (id)requestWithFetchRequest:(id)a0;

- (id)initWithFetchRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithEntity:(id)a0 predicate:(id)a1;
- (id)description;
- (id)initWithEntity:(id)a0;
- (id)initWithEntity:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2;

@end
