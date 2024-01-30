@class NSMutableSet;

@interface PXSurveyQuestionsDataSource : NSObject {
    unsigned long long _numberOfQuestionsGenerated;
    NSMutableSet *_answeredGadgetIdentifiers;
}

@property (readonly, nonatomic) unsigned long long numberOfQuestionsRemainingToBeAnswered;

+ (id)mostRecentQuestionCreationDate;

- (id)init;
- (void).cxx_destruct;
- (void)resetGeneratedQuestions;
- (void)didGenerateNumberOfGadgets:(unsigned long long)a0;
- (BOOL)didAnswerQuestionForGadgetIdentifier:(id)a0;
- (void)didRemoveGadgetWithIdentifier:(id)a0;
- (id)fetchSortedAllUnansweredQuestionsWithLimit:(unsigned long long)a0;
- (unsigned long long)fetchTotalNumberOfUnansweredQuestions;
- (unsigned long long)fetchTotalNumberOfAnsweredYesOrNoQuestions;
- (id)_fetchOptionsForShouldPrefetchCount:(BOOL)a0;
- (void)invalidateQuestions:(id)a0;

@end
