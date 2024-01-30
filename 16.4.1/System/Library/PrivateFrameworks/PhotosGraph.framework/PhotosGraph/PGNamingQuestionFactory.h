@class PHFetchResult;

@interface PGNamingQuestionFactory : PGSurveyQuestionFactory

@property (retain, nonatomic) PHFetchResult *persons;

- (void).cxx_destruct;
- (unsigned short)questionType;
- (long long)questionOptions;
- (BOOL)_persistQuestions:(id)a0 questionsToRemove:(id)a1;
- (BOOL)_shouldAddNewNamingQuestionForPersonUUID:(id)a0;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;

@end
