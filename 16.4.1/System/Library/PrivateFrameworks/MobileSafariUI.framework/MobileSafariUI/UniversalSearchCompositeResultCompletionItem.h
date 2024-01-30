@class WBSQuerySuggestion, NSArray, NSString, SFSearchResult;
@protocol CompletionItemActionHandler;

@interface UniversalSearchCompositeResultCompletionItem : NSObject <SearchUIFeedbackDelegate, CompletionItem>

@property (readonly, copy, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSString *bestSectionHeader;
@property (readonly, nonatomic, getter=isAccessoryItem) BOOL accessoryItem;
@property (readonly, nonatomic) BOOL allowsAccessoryItem;
@property (readonly, nonatomic) BOOL restoresSearchState;
@property (readonly, nonatomic) NSString *title;
@property (nonatomic) BOOL shouldPrefetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property (readonly, nonatomic) BOOL usesDefaultHeaderView;
@property (readonly, nonatomic) BOOL needsSectionHeader;
@property (nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (retain, nonatomic) id<CompletionItemActionHandler> handlerForActionItem;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (readonly, nonatomic) unsigned long long engagementDestination;
@property (nonatomic) long long parsecQueryID;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;

- (void)didEngageResult:(id)a0;
- (BOOL)isEquivalentTo:(id)a0;
- (void)didEngageCardSection:(id)a0;
- (void)didPerformCommand:(id)a0;
- (void)cardViewDidAppear:(id)a0;
- (id)userVisibleURLString;
- (void)resultsDidBecomeVisible:(id)a0;
- (void).cxx_destruct;
- (int)_separatorStyle;
- (id)originalURLString;
- (void)_applySeparatorStyleToCell:(id)a0 forSeparatorStyle:(int)a1;
- (void)_postFeedback:(id)a0;
- (void)acceptCompletionWithActionHandler:(id)a0;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)a0;
- (id)completionTableViewCellForCompletionList:(id)a0;
- (id)completionTableViewCellReuseIdentifier;
- (void)configureCompletionTableViewCell:(id)a0 forCompletionList:(id)a1;
- (id)initWithResults:(id)a0 isAccessoryItem:(BOOL)a1 forQueryId:(long long)a2;
- (id)reflectedStringForUserTypedString:(id)a0;
- (BOOL)shouldPrefetchWithMatchLength:(unsigned long long)a0;

@end
