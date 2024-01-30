@interface PGPetQuestionFactory : PGSurveyQuestionFactory

- (unsigned short)questionType;
- (long long)questionOptions;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (id)initialPetQuestion;
- (void)updateInitialQuestion:(id)a0;

@end
