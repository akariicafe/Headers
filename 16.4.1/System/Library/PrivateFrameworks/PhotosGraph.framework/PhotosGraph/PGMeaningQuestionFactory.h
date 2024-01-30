@class NSSet;

@interface PGMeaningQuestionFactory : PGSurveyQuestionFactory

@property (retain, nonatomic) NSSet *meaningLabelsForWhichToGenerateQuestions;

- (void).cxx_destruct;
- (unsigned short)questionType;
- (id)_expandedDateNodesFromDateNode:(id)a0;
- (long long)questionOptions;
- (id)_dateNodesFromStartDate:(id)a0 toEndDate:(id)a1 inGraph:(id)a2;
- (id)_expandedDateNodesFromDateNodes:(id)a0;
- (id)_inferMeaningLabelsForMomentNode:(id)a0 meaningLabels:(id)a1 graph:(id)a2 sceneTaxonomy:(id)a3 cache:(id)a4;
- (id)_looseCriteriasForCriteria:(id)a0 graph:(id)a1;
- (id)_meaningLabelsByParentMeaningLabels;
- (id)_questionsToAddFromMomentNodes:(id)a0 useRepresentativeAssets:(BOOL)a1 localFactoryScore:(double)a2 alreadyGeneratedQuestions:(id)a3 limit:(unsigned long long)a4 graph:(id)a5 sceneTaxonomy:(id)a6 progressBlock:(id /* block */)a7;
- (void)_updateMeaningQuestionsIfNeededWithProgressBlock:(id /* block */)a0;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;

@end
