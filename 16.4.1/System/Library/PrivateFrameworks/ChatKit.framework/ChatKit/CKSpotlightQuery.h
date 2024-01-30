@class MDSearchQuery, NSArray, NSMutableDictionary, NSString, NSObject, IMChatRegistry;
@protocol OS_dispatch_group;

@interface CKSpotlightQuery : NSObject <MDSearchQueryDelegate>

@property (nonatomic) unsigned long long resultIndex;
@property (retain, nonatomic) NSArray *searchResults;
@property (retain, nonatomic) NSMutableDictionary *chatGUIDToLatestSearchResult;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *searchResultLoadingGroup;
@property (nonatomic) BOOL cancelled;
@property (retain, nonatomic) IMChatRegistry *chatRegisteryOverride;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) MDSearchQuery *currentQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cleanup;
- (void)cancel;
- (id)chatRegistry;
- (void)dealloc;
- (void).cxx_destruct;
- (void)searchQuery:(id)a0 didFailWithError:(id)a1;
- (void)searchQuery:(id)a0 didReturnItems:(id)a1;
- (void)searchQuery:(id)a0 statusChanged:(unsigned long long)a1;
- (void)_callCompletion;
- (void)_processSearchResults;
- (id)initWithSearchText:(id)a0 chatRegistryOverride:(id)a1 startQuery:(BOOL)a2 completionBlock:(id /* block */)a3;
- (id)initWithSearchText:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithSearchText:(id)a0 completionBlock:(id /* block */)a1 startQuery:(BOOL)a2;

@end
