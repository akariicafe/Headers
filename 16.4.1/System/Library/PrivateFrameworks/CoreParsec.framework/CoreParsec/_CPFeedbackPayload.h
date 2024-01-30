@class PBCodable, _CPSectionEngagementFeedback, _CPCardSectionEngagementFeedback, _CPVisibleSectionHeaderFeedback, _CPResultGradingFeedback, _CPStartNetworkSearchFeedback, _CPSearchViewAppearFeedback, _CPClientTimingFeedback, _CPCommandEngagementFeedback, _CPEndSearchFeedback, _CPConnectionInvalidatedFeedback, _CPClearInputFeedback, _CPCardViewDisappearFeedback, _CPStartSearchFeedback, _CPDidGoToSearchFeedback, _CPEndLocalSearchFeedback, _CPResultEngagementFeedback, _CPStartLocalSearchFeedback, _CPCardViewAppearFeedback, _CPCBAEngagementFeedback, _CPResultsReceivedAfterTimeoutFeedback, NSData, _CPLookupHintRelevancyFeedback, _CPSkipSearchFeedback, _CPCustomFeedback, _CPSessionEndFeedback, _CPResultRankingFeedback, _CPSectionRankingFeedback, _CPResultFeedback, _CPSessionMissingSuggestionsFeedback, _CPVisibleSuggestionsFeedback, _CPVisibleResultsFeedback, _CPDidGoToSiteFeedback, _CPSearchViewDisappearFeedback, _CPMapsCardSectionEngagementFeedback, _CPFeedback, _CPLateSectionsAppendedFeedback, _CPEndNetworkSearchFeedback, _CPDynamicButtonVisibilityFeedback, _CPRankingFeedback, NSString, _CPCacheHitFeedback, _CPCardSectionFeedback, _CPErrorFeedback, _CPSuggestionEngagementFeedback, _CPStoreCardSectionEngagementFeedback, _CPExperimentTriggeredFeedback, _CPSessionMissingResultsFeedback;
@protocol _CPProcessableFeedback;

@interface _CPFeedbackPayload : PBCodable <_CPFeedbackPayload, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) PBCodable<_CPProcessableFeedback> *codable;
@property (retain, nonatomic) _CPFeedback *feedback;
@property (retain, nonatomic) _CPSearchViewAppearFeedback *searchViewAppearFeedback;
@property (retain, nonatomic) _CPSearchViewDisappearFeedback *searchViewDisappearFeedback;
@property (retain, nonatomic) _CPRankingFeedback *rankingFeedback;
@property (retain, nonatomic) _CPSectionRankingFeedback *sectionRankingFeedback;
@property (retain, nonatomic) _CPResultRankingFeedback *resultRankingFeedback;
@property (retain, nonatomic) _CPResultFeedback *resultFeedback;
@property (retain, nonatomic) _CPResultEngagementFeedback *resultEngagementFeedback;
@property (retain, nonatomic) _CPVisibleResultsFeedback *visibleResultsFeedback;
@property (retain, nonatomic) _CPCardSectionFeedback *cardSectionFeedback;
@property (retain, nonatomic) _CPMapsCardSectionEngagementFeedback *mapsCardSectionEngagementFeedback;
@property (retain, nonatomic) _CPStoreCardSectionEngagementFeedback *storeCardSectionEngagementFeedback;
@property (retain, nonatomic) _CPStartSearchFeedback *startSearchFeedback;
@property (retain, nonatomic) _CPEndSearchFeedback *endSearchFeedback;
@property (retain, nonatomic) _CPStartNetworkSearchFeedback *startNetworkSearchFeedback;
@property (retain, nonatomic) _CPEndNetworkSearchFeedback *endNetworkSearchFeedback;
@property (retain, nonatomic) _CPStartLocalSearchFeedback *startLocalSearchFeedback;
@property (retain, nonatomic) _CPEndLocalSearchFeedback *endLocalSearchFeedback;
@property (retain, nonatomic) _CPErrorFeedback *errorFeedback;
@property (retain, nonatomic) _CPCustomFeedback *customFeedback;
@property (retain, nonatomic) _CPSuggestionEngagementFeedback *suggestionEngagementFeedback;
@property (retain, nonatomic) _CPCardViewDisappearFeedback *cardViewDisappearFeedback;
@property (retain, nonatomic) _CPVisibleSuggestionsFeedback *visibleSuggestionsFeedback;
@property (retain, nonatomic) _CPResultsReceivedAfterTimeoutFeedback *resultsReceivedAfterTimeoutFeedback;
@property (retain, nonatomic) _CPLateSectionsAppendedFeedback *lateSectionsAppendedFeedback;
@property (retain, nonatomic) _CPClearInputFeedback *clearInputFeedback;
@property (retain, nonatomic) _CPSectionEngagementFeedback *sectionEngagementFeedback;
@property (retain, nonatomic) _CPVisibleSectionHeaderFeedback *visibleSectionHeaderFeedback;
@property (retain, nonatomic) _CPDidGoToSiteFeedback *didGoToSiteFeedback;
@property (retain, nonatomic) _CPDidGoToSearchFeedback *didGoToSearchFeedback;
@property (retain, nonatomic) _CPSessionMissingResultsFeedback *sessionMissingResultsFeedback;
@property (retain, nonatomic) _CPSessionMissingSuggestionsFeedback *sessionMissingSuggestionsFeedback;
@property (retain, nonatomic) _CPResultGradingFeedback *resultGradingFeedback;
@property (retain, nonatomic) _CPLookupHintRelevancyFeedback *lookupHintRelevancyFeedback;
@property (retain, nonatomic) _CPConnectionInvalidatedFeedback *connectionInvalidatedFeedback;
@property (retain, nonatomic) _CPCardSectionEngagementFeedback *cardSectionEngagementFeedback;
@property (retain, nonatomic) _CPSessionEndFeedback *sessionEndFeedback;
@property (retain, nonatomic) _CPCardViewAppearFeedback *cardViewAppearFeedback;
@property (retain, nonatomic) _CPSkipSearchFeedback *skipSearchFeedback;
@property (retain, nonatomic) _CPCacheHitFeedback *cacheHitFeedback;
@property (retain, nonatomic) _CPCBAEngagementFeedback *cbaEngagementFeedback;
@property (retain, nonatomic) _CPClientTimingFeedback *clientTimingFeedback;
@property (retain, nonatomic) _CPCommandEngagementFeedback *commandEngagementFeedback;
@property (retain, nonatomic) _CPDynamicButtonVisibilityFeedback *dynamicButtonVisibilityFeedback;
@property (retain, nonatomic) _CPExperimentTriggeredFeedback *experimentTriggeredFeedback;
@property (nonatomic) unsigned long long queryId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContained_Feedback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithCodable:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithFeedback:(id)a0;
- (void).cxx_destruct;
- (void)clearContained_Feedback;
- (void)updateQueryId:(unsigned long long)a0;
- (void)updateResults:(id)a0 withId:(unsigned long long)a1;

@end
