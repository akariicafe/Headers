@class PHFetchResult;

@interface PGNamingQuestionFactory : PGSurveyQuestionFactory

@property (retain, nonatomic) PHFetchResult *persons;

- (unsigned short)questionType;
- (void).cxx_destruct;
- (long long)questionOptions;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (BOOL)_shouldAddNewNamingQuestionForPersonUUID:(id)a0;
- (BOOL)_persistQuestions:(id)a0 questionsToRemove:(id)a1;

@end
