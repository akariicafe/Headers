@class RTPredicateInspector;
@protocol RTPersistenceContextDelegate;

@interface RTPersistenceContext : NSManagedObjectContext

@property (weak) id<RTPersistenceContextDelegate> delegate;
@property (retain, nonatomic) RTPredicateInspector *predicateInspector;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long mirroringQualityOfService;

- (unsigned long long)countForFetchRequest:(id)a0 error:(id *)a1;
- (id)executeFetchRequest:(id)a0 error:(id *)a1;
- (id)predicateWithDefaultSubstitutionVariables:(id)a0;
- (void)_updateRequest:(id *)a0 includingContextOptions:(unsigned long long)a1;
- (id)substitutionVariableKeys;
- (BOOL)_processError:(inout id *)a0;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (BOOL)allowTombstones;
- (BOOL)save:(id *)a0;
- (BOOL)_shouldExecute:(id *)a0;
- (BOOL)shouldSubstituteVariables:(id)a0 inPredicate:(id)a1 entityName:(id)a2 model:(id)a3;
- (void).cxx_destruct;
- (id)executeRequest:(id)a0 error:(id *)a1;
- (id)initWithConcurrencyType:(unsigned long long)a0 options:(unsigned long long)a1;
- (BOOL)validateEntityName:(id)a0 inModel:(id)a1;

@end
