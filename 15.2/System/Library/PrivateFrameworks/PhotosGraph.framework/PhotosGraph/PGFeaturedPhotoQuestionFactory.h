@class PGSuggestionSession;

@interface PGFeaturedPhotoQuestionFactory : PGSurveyQuestionFactory {
    PGSuggestionSession *_suggestionSession;
}

- (unsigned short)questionType;
- (void).cxx_destruct;
- (long long)questionOptions;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (id)initWithWorkingContext:(id)a0;
- (id)randomAssetsUUIDsWithLimit:(unsigned long long)a0;

@end
