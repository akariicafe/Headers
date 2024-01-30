@interface PGBusinessItemQuestionFactory : PGSurveyQuestionFactory

- (unsigned short)questionType;
- (long long)questionOptions;
- (double)_localBusinessItemFactoryScoreForMomentNode:(id)a0;
- (BOOL)_shouldAddNewBusinessItemQuestionForAssetUUID:(id)a0;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;

@end
