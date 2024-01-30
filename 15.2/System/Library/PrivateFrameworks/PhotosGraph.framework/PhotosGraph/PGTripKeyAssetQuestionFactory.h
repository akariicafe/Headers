@interface PGTripKeyAssetQuestionFactory : PGSurveyQuestionFactory

- (unsigned short)questionType;
- (long long)questionOptions;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (void)_enumerateTrips:(id /* block */)a0;

@end
