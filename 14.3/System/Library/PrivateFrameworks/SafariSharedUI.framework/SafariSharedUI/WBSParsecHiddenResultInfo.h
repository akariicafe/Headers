@class WBSParsecSearchResult, NSDictionary;
@protocol WBSCompletionListItem;

@interface WBSParsecHiddenResultInfo : NSObject

@property (readonly, nonatomic) WBSParsecSearchResult *hiddenResult;
@property (readonly, nonatomic) id<WBSCompletionListItem> preferredCompletionListItem;
@property (readonly, nonatomic) long long reasonForHidingResult;
@property (nonatomic) unsigned long long preferredCompletionListItemPositionInCompletionList;
@property (nonatomic) unsigned long long preferredCompletionListItemPositionInFrequentlyVisitedSites;
@property (readonly, nonatomic) NSDictionary *feedbackDictionaryRepresentation;

- (void).cxx_destruct;
- (id)initWithHiddenResult:(id)a0 preferredCompletionListItem:(id)a1 reason:(long long)a2;

@end
