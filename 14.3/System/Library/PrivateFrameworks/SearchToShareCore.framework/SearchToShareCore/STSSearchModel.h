@class NSMutableArray, NSMutableDictionary, NSArray, NSString, PARSession, PARTask, NSObject;
@protocol STSSearchModelQuerySuggestionsDelegate, STSSearchModelDelegate, STSRecentsDelegate, OS_dispatch_queue;

@interface STSSearchModel : NSObject <PARSessionDelegate>

@property (retain, nonatomic) PARTask *currentTask;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mutableSectionsQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue;
@property (retain, nonatomic) NSMutableDictionary *zkwResultStore;
@property (retain, nonatomic) NSMutableDictionary *searchResultStore;
@property (retain, nonatomic) NSArray *searchResults;
@property (retain, nonatomic) NSMutableArray *recentsToDedup;
@property (readonly, nonatomic) NSString *currentQuery;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *querySuggestions;
@property (retain, nonatomic) NSArray *predictedSuggestions;
@property (weak, nonatomic) id<STSSearchModelDelegate> delegate;
@property (weak, nonatomic) id<STSRecentsDelegate> recentsDelegate;
@property (weak, nonatomic) id<STSSearchModelQuerySuggestionsDelegate> querySuggestionsDelegate;
@property (retain, nonatomic) PARSession *parsecSession;
@property (retain, nonatomic) NSArray *categoryList;
@property (retain, nonatomic) NSArray *recentResults;
@property unsigned long long categoryListRequestQueryId;
@property (retain, nonatomic) NSString *conversationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverURLString;
+ (unsigned long long)clientQueryId;
+ (void)incrementClientQueryId;

- (id)init;
- (void).cxx_destruct;
- (void)removeAllSections;
- (void)session:(id)a0 bag:(id)a1 didLoadWithError:(id)a2;
- (void)performZKWSearchQueryWithCompletion:(id /* block */)a0;
- (void)performSearchWithQueryString:(id)a0 requestType:(long long)a1 completion:(id /* block */)a2;
- (void)fetchMoreResults;
- (void)removeQuerySuggestions;
- (void)performCategoryListRequest:(id /* block */)a0;
- (id)defaultCategoryList;
- (void)_clearSectionsAndNotifyDelegate;
- (void)_updateSearchProviderImageForResult:(id)a0;
- (void)_performParsecdSearchQuery:(id)a0 requestType:(long long)a1 completion:(id /* block */)a2;
- (void)prefetchRecentsWithCompletion:(id /* block */)a0;
- (void)appendQueryItemsForRequest:(id)a0 type:(long long)a1;
- (id)createQuerySession;
- (void)_clearQuerySuggestionsAndNotifyDelegate;
- (id)mockQuerySuggestions;

@end
