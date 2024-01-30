@class NSFetchRequest;

@interface WFDatabaseResultFetchRequestOperation : WFDatabaseResultFetchOperation

@property (readonly, nonatomic) NSFetchRequest *fetchRequest;

- (id)initWithFetchRequest:(id)a0;
- (void).cxx_destruct;
- (id)entity;
- (id)description;
- (id)resultsWithContext:(id)a0 error:(id *)a1;
- (long long)countWithContext:(id)a0 error:(id *)a1;

@end
