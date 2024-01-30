@class NSString, SFRankingFeedback, NSDate, NSMutableArray;
@protocol _CompletionListRankingObserverFeedbackGeneratorDelegate;

@interface _WBSSearchFoundationFeedbackGenerator : NSObject <_CompletionListRankingObserverFeedbackGenerator> {
    NSDate *_rankingStartDate;
    NSMutableArray *_sectionRankingFeedbackObjects;
    NSString *_currentSectionBundleIdentifier;
    NSMutableArray *_currentSectionResultRankingFeedbackObjects;
}

@property (readonly, nonatomic) SFRankingFeedback *rankingFeedback;
@property (weak, nonatomic) id<_CompletionListRankingObserverFeedbackGeneratorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)didBeginRanking;
- (void)didEndRanking;
- (void)didBeginSectionWithBundleIdentifier:(id)a0;
- (void)didAddItem:(id)a0 hidingOutrankedResults:(id)a1 hidingDuplicateResults:(id)a2;
- (void)removeAllSectionsAndItems;
- (void)_commitPreviousSectionIfNecessary;

@end
