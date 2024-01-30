@interface PGRelationshipQuestionFactory : PGSurveyQuestionFactory

+ (id)relationshipTypesByRelationshipLabel;
+ (id)localFactoryScoreByRelationshipLabels;

- (unsigned short)questionType;
- (long long)questionOptions;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;

@end
