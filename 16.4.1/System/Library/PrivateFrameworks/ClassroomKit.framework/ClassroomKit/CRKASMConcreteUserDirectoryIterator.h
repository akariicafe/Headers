@class NSString, NSMutableArray;
@protocol CRKClassKitRosterRequirements, CRKClassKitQuery;

@interface CRKASMConcreteUserDirectoryIterator : NSObject <CRKASMUserDirectoryIterator>

@property (readonly, nonatomic) id<CRKClassKitRosterRequirements> requirements;
@property (readonly, nonatomic) id<CRKClassKitQuery> query;
@property (readonly, nonatomic) NSMutableArray *queryCompletionQueue;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iteratorWithRosterRequirements:(id)a0 queryGenerator:(id /* block */)a1;

- (void).cxx_destruct;
- (void)fetchNextUsersWithCompletion:(id /* block */)a0;
- (id)initWithRequirements:(id)a0 query:(id)a1;
- (void)queryDidFinishExecutingWithResults:(id)a0 error:(id)a1;
- (void)serviceQueryQueue;

@end
