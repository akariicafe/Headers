@interface PGPublicEventQuestionFactory : PGSurveyQuestionFactory

- (unsigned short)questionType;
- (long long)questionOptions;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (double)_publicEventLocalFactoryScoreForMomentNode:(id)a0;
- (BOOL)_shouldAddNewPublicEventQuestionForAssetUUID:(id)a0;

@end
