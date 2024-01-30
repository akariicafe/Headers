@class NSArray, REMListPredicateDescriptor;

@interface REMListFetchExecutor : _REMFetchExecutor

@property (retain, nonatomic) REMListPredicateDescriptor *predicateDescriptor;
@property (retain, nonatomic) NSArray *sortDescriptors;
@property (readonly, nonatomic) unsigned long long options;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)resultsFromFetchResult:(id)a0 inStore:(id)a1 error:(id *)a2;
- (id)initWithPredicateDescriptor:(id)a0 sortDescriptors:(id)a1 options:(unsigned long long)a2;
- (id)resultsFromFetchResult:(id)a0 inAccount:(id)a1 error:(id *)a2;
- (id)resultsFromFetchResult:(id)a0 inParentList:(id)a1 error:(id *)a2;

@end
