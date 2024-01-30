@class NSArray;

@interface CKDiscoverUserInfosOperation : CKOperation

@property (copy, nonatomic) NSArray *emailAddresses;
@property (copy, nonatomic) NSArray *userRecordIDs;
@property (copy, nonatomic) id /* block */ discoverUserInfosCompletionBlock;

- (id)initWithEmailAddresses:(id)a0 userRecordIDs:(id)a1;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)a0;

@end
