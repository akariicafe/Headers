@class CNContactStore, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TUSearchController : NSObject

@property (class, readonly, nonatomic) TUSearchController *sharedInstance;

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSMutableArray *recentsModules;
@property (retain, nonatomic) NSMutableArray *searchModules;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue;

- (id)init;
- (void).cxx_destruct;
- (void)searchForString:(id)a0 completion:(id /* block */)a1;
- (BOOL)_searchIsRunning;
- (void)_cancelSearches;
- (id /* block */)recentsModuleCompletionWithCompletion:(id /* block */)a0;
- (id /* block */)searchModuleCompletionWithSearchTerm:(id)a0 completion:(id /* block */)a1;
- (id /* block */)_searchModuleCompletionWithModules:(id)a0 searchTerm:(id)a1 resultsClass:(Class)a2 completion:(id /* block */)a3;
- (void)recentsWithCompletion:(id /* block */)a0;

@end
