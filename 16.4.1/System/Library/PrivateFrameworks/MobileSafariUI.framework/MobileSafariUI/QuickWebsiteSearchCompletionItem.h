@class WBSQuerySuggestion, WBSQuickWebsiteSearchProvider, QuickWebsiteSearchQuery, NSString, SFSearchResult;
@protocol CompletionItemActionHandler;

@interface QuickWebsiteSearchCompletionItem : NSObject <CompletionItem>

@property (readonly, nonatomic) WBSQuickWebsiteSearchProvider *searchProvider;
@property (readonly, nonatomic) QuickWebsiteSearchQuery *searchQuery;
@property (readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property (readonly, nonatomic) BOOL usesDefaultHeaderView;
@property (readonly, nonatomic) BOOL needsSectionHeader;
@property (nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (readonly, nonatomic) BOOL restoresSearchState;
@property (retain, nonatomic) id<CompletionItemActionHandler> handlerForActionItem;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (readonly, nonatomic) unsigned long long engagementDestination;
@property (nonatomic) long long parsecQueryID;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEquivalentTo:(id)a0;
- (void).cxx_destruct;
- (void)acceptCompletionWithActionHandler:(id)a0;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)a0;
- (id)completionTableViewCellForCompletionList:(id)a0;
- (id)completionTableViewCellReuseIdentifier;
- (void)configureCompletionTableViewCell:(id)a0 forCompletionList:(id)a1;
- (id)initWithProvider:(id)a0 query:(id)a1 forQueryID:(long long)a2;
- (id)reflectedStringForUserTypedString:(id)a0;

@end
