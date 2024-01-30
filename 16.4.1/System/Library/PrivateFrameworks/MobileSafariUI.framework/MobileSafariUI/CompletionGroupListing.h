@class NSString, NSArray, PencilInputCompletionItem, QuickWebsiteSearchCompletionItem, NSSet, WBSBrowserTabCompletionMatch, FindOnPageCompletionItem, NSMutableArray, WBSCompletionQuery, UniversalSearchCompositeResultCompletionItem;
@protocol CompletionItem;

@interface CompletionGroupListing : NSObject {
    BOOL _needsRebuild;
    NSArray *_groupListing;
    unsigned long long _indexOfSearchSuggestionsGroup;
    unsigned long long _indexOfFindOnPageGroup;
    NSMutableArray *_displayedParsecResults;
    NSString *_titleForCompositeParsecResult;
    UniversalSearchCompositeResultCompletionItem *_compositeParsecResult;
    UniversalSearchCompositeResultCompletionItem *_compositeParsecAccessoryItem;
    BOOL _isForFirstDisplay;
}

@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL hasParsecCompletions;
@property (retain, nonatomic) WBSCompletionQuery *query;
@property (retain, nonatomic) WBSCompletionQuery *rewrittenQuery;
@property (readonly, nonatomic) unsigned long long numberOfGroups;
@property (readonly, copy, nonatomic) NSArray *groups;
@property (readonly, nonatomic, getter=isAwaitingParsec) BOOL awaitingParsec;
@property (readonly, nonatomic, getter=isAwaitingSearchProvider) BOOL awaitingSearchProvider;
@property (readonly, nonatomic, getter=isAwaitingCompletionDatabase) BOOL awaitingCompletionDatabase;
@property (readonly, nonatomic, getter=isAwaitingTabCompletion) BOOL awaitingTabCompletion;
@property (readonly, nonatomic, getter=isSufficientlyComputedForDisplay) BOOL sufficientlyComputedForDisplay;
@property (copy, nonatomic) NSArray *URLCompletionMatches;
@property (readonly, nonatomic) id<CompletionItem> topHit;
@property (readonly, copy, nonatomic) NSSet *topHitAddresses;
@property (readonly, copy, nonatomic) NSArray *topHits;
@property (copy, nonatomic) NSArray *parsecTopHits;
@property (copy, nonatomic) NSArray *localTopHits;
@property (copy, nonatomic) WBSBrowserTabCompletionMatch *tabCompletionMatch;
@property (copy, nonatomic) NSArray *topParsecResults;
@property (copy, nonatomic) NSArray *bottomParsecResults;
@property (retain, nonatomic) QuickWebsiteSearchCompletionItem *quickWebsiteSearchItem;
@property (copy, nonatomic) NSArray *searchSuggestions;
@property (copy, nonatomic) NSArray *suggestedSites;
@property (retain, nonatomic) PencilInputCompletionItem *pencilCompletionItem;
@property (readonly, nonatomic) FindOnPageCompletionItem *findOnPageCompletionItem;
@property (readonly, copy, nonatomic) NSString *titleForFindOnPage;

- (void).cxx_destruct;
- (id)groupAtIndex:(unsigned long long)a0;
- (void)clearTopHits;
- (id)initWithQuery:(id)a0 forFirstDisplay:(BOOL)a1;
- (void)markDatabaseResultsReceived;
- (void)markParsecResultsReceived;
- (void)markSearchResultsReceived;
- (void)markTabCompletionReceived;
- (void)setCompositeParsecResult:(id)a0 withAccessoryItem:(id)a1 title:(id)a2;
- (void)setFindOnPageCompletion:(id)a0 withTitle:(id)a1;
- (void)setNeedsParsecDatabaseQueryRewrite;

@end
