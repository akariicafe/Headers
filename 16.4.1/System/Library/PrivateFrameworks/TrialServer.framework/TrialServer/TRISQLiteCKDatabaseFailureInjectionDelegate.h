@class NSMutableArray;

@interface TRISQLiteCKDatabaseFailureInjectionDelegate : NSObject <TRISQLiteCKDatabaseDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *queryErrors;
@property (retain, nonatomic) NSMutableArray *fetchErrors;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithErrorForAllOperations:(id)a0;
- (id)initWithQueryErrors:(id)a0 fetchErrors:(id)a1;
- (BOOL)shouldProcessFetchOperation:(id)a0 error:(id *)a1;
- (BOOL)shouldProcessQueryOperation:(id)a0 error:(id *)a1;

@end
