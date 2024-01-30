@class NSSet;

@interface PGMeaningQuestionFactory : PGSurveyQuestionFactory

@property (retain, nonatomic) NSSet *meaningLabelsForWhichToGenerateQuestions;

- (void).cxx_destruct;
- (unsigned short)questionType;
- (long long)questionOptions;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (void)_updateMeaningQuestionsIfNeededWithProgressBlock:(id /* block */)a0;
- (id)_meaningLabelsByParentMeaningLabels;
- (id)_questionsToAddFromMomentNodes:(id)a0 useCuratedAssets:(BOOL)a1 localFactoryScore:(double)a2 alreadyGeneratedQuestions:(id)a3 limit:(unsigned long long)a4 graph:(id)a5 progressBlock:(id /* block */)a6;
- (id)_looseMeaningLabelsForMomentNode:(id)a0 fromCandidateLabels:(id)a1 inGraph:(id)a2;
- (id)_looseCriteriasForCriteria:(id)a0;
- (id)_expandedDateNodesFromDateNodes:(id)a0;
- (id)_expandedDateNodesFromDateNode:(id)a0;
- (id)_dateNodesFromStartDate:(id)a0 toEndDate:(id)a1;

@end
