@interface PGSocialGroupsQuestionFactory : PGSurveyQuestionFactory

+ (void)enumeratePeopleClustersWithGraph:(id)a0 withLinkage:(unsigned long long)a1 withBlock:(id /* block */)a2;
+ (void)enumerateSocialGroupsWithGraph:(id)a0 withLinkage:(unsigned long long)a1 validGroupsBlock:(id /* block */)a2 invalidGroupsBlock:(id /* block */)a3 averageWeight:(out float *)a4;

- (unsigned short)questionType;
- (long long)questionOptions;
- (id)_createSocialGroupWithPersonLocalIdentifiers:(id)a0;
- (id)_identifierForPersonNodesAsString:(id)a0;
- (id)_socialGroupsForSurvey:(id)a0 withLimit:(unsigned long long)a1;
- (id)_socialGroupsForSurveyFromCurrentAlgorithm:(id)a0;
- (id)_socialGroupsForSurveyFromCustomAlgorithm:(id)a0;
- (id)_socialGroupsForSurveyFromNewAlgorithm:(id)a0 withLinkage:(unsigned long long)a1;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;

@end
