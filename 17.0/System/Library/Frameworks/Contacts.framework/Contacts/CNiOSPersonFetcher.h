@class CNContactsEnvironment, CNiOSPersonFetchRequest;

@interface CNiOSPersonFetcher : NSObject

@property (readonly, nonatomic) CNiOSPersonFetchRequest *fetchRequest;
@property (readonly, nonatomic) void *addressBook;
@property (readonly, nonatomic) CNContactsEnvironment *environment;

+ (id)peopleForFetchRequest:(id)a0 matchInfos:(id *)a1 inAddressBook:(void *)a2 environment:(id)a3 error:(id *)a4;

- (void)dealloc;
- (void).cxx_destruct;
- (id)executeFetchRequestWithProgressiveResults:(id /* block */)a0 completion:(id /* block */)a1;
- (id)fetchPeopleReturningMatchInfos:(id *)a0 error:(id *)a1;
- (id)fetchPeopleUsingNativeSortReturningMatchInfos:(id *)a0 error:(id *)a1;
- (id)initWithAddressBook:(void *)a0 fetchRequest:(id)a1 environment:(id)a2;
- (BOOL)shouldSortInMemory;
- (id)sortPeople:(id)a0;

@end
