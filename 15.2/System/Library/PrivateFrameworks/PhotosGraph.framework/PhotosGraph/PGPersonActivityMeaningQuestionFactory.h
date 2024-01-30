@class NSSet;

@interface PGPersonActivityMeaningQuestionFactory : PGSurveyQuestionFactory

@property (retain, nonatomic) NSSet *personActivityMeaningLabelsForWhichToGenerateQuestions;

- (unsigned short)questionType;
- (void).cxx_destruct;
- (long long)questionOptions;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (id)_questionsToAddFromMomentNodes:(id)a0 localFactoryScore:(double)a1 alreadyGeneratedQuestions:(id)a2 limit:(unsigned long long)a3 graph:(id)a4 progressBlock:(id /* block */)a5;

@end
