@class PHPhotoLibrary, NSPredicate, NSMutableSet;

@interface PXSurveyQuestionsDataSource : NSObject {
    unsigned long long _numberOfQuestionsGenerated;
    NSMutableSet *_answeredGadgetIdentifiers;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) unsigned long long numberOfQuestionsRemainingToBeAnswered;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPhotoLibrary:(id)a0 predicate:(id)a1;
- (void)resetGeneratedQuestions;
- (void)didGenerateNumberOfGadgets:(unsigned long long)a0;
- (BOOL)didAnswerQuestionForGadgetIdentifier:(id)a0;
- (void)didRemoveGadgetWithIdentifier:(id)a0;
- (id)fetchSortedAllUnansweredQuestionsWithLimit:(unsigned long long)a0;
- (unsigned long long)fetchTotalNumberOfUnansweredQuestions;
- (unsigned long long)fetchTotalNumberOfAnsweredYesOrNoQuestions;
- (id)_fetchOptionsForShouldPrefetchCount:(BOOL)a0;
- (id)mostRecentQuestionCreationDate;
- (void)invalidateQuestions:(id)a0;

@end
