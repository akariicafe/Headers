@interface PGAgeCategoryQuestionFactory : PGSurveyQuestionFactory

- (unsigned short)questionType;
- (long long)questionOptions;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (id)_sortedAgeCategories;
- (BOOL)_shouldAddNewAgeCategoryQuestionForPersonUUID:(id)a0;

@end
