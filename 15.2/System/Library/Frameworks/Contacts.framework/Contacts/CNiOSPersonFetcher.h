@class CNContactsEnvironment, CNiOSPersonFetchRequest;

@interface CNiOSPersonFetcher : NSObject

@property (readonly, nonatomic) CNiOSPersonFetchRequest *fetchRequest;
@property (readonly, nonatomic) void *addressBook;
@property (readonly, nonatomic) CNContactsEnvironment *environment;

+ (id)peopleForFetchRequest:(id)a0 matchInfos:(id *)a1 inAddressBook:(void *)a2 environment:(id)a3 error:(id *)a4;

- (id)sortPeople:(id)a0;
- (BOOL)shouldSortInMemory;
- (id)initWithAddressBook:(void *)a0 fetchRequest:(id)a1 environment:(id)a2;
- (id)fetchPeopleReturningMatchInfos:(id *)a0 error:(id *)a1;
- (id)fetchPeopleUsingNativeSortReturningMatchInfos:(id *)a0 error:(id *)a1;
- (id)executeFetchRequestWithProgressiveResults:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
