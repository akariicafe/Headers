@interface PGPetQuestionFactory : PGSurveyQuestionFactory

+ (id)petSceneLabels;

- (unsigned short)questionType;
- (long long)questionOptions;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (id)initialPetQuestion;
- (id)momentsForPetInPhotoLibrary:(id)a0 withGraph:(id)a1;
- (void)updateInitialQuestion:(id)a0;

@end
