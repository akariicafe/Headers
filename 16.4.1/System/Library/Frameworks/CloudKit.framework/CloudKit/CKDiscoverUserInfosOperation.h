@class NSArray;

@interface CKDiscoverUserInfosOperation : CKOperation

@property (copy, nonatomic) NSArray *emailAddresses;
@property (copy, nonatomic) NSArray *userRecordIDs;
@property (copy, nonatomic) id /* block */ discoverUserInfosCompletionBlock;

- (BOOL)CKOperationShouldRun:(id *)a0;
- (void).cxx_destruct;
- (id)initWithEmailAddresses:(id)a0 userRecordIDs:(id)a1;

@end
