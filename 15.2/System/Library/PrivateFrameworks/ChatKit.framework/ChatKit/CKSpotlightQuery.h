@class MDSearchQuery, NSString, NSArray, NSMutableDictionary, NSObject, IMChatRegistry;
@protocol OS_dispatch_group;

@interface CKSpotlightQuery : NSObject <MDSearchQueryDelegate> {
    unsigned long long _resultIndex;
    NSArray *_searchResults;
    NSMutableDictionary *_chatGUIDToLatestSearchResult;
    NSObject<OS_dispatch_group> *_searchResultLoadingGroup;
    BOOL _cancelled;
}

@property (retain, nonatomic) IMChatRegistry *chatRegisteryOverride;
@property (readonly, nonatomic) MDSearchQuery *currentQuery;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cleanup;
- (id)initWithSearchText:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)searchQuery:(id)a0 didReturnItems:(id)a1;
- (void)searchQuery:(id)a0 statusChanged:(unsigned long long)a1;
- (void)searchQuery:(id)a0 didFailWithError:(id)a1;
- (void)dealloc;
- (id)chatRegistry;
- (void)_callCompletion;
- (void)_processSearchResults;
- (id)initWithSearchText:(id)a0 completionBlock:(id /* block */)a1 startQuery:(BOOL)a2;
- (id)initWithSearchText:(id)a0 chatRegistryOverride:(id)a1 startQuery:(BOOL)a2 completionBlock:(id /* block */)a3;
- (void)cancel;

@end
