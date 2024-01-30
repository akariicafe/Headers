@class PGSuggestionSession;

@interface PGFeaturedPhotoQuestionFactory : PGSurveyQuestionFactory {
    PGSuggestionSession *_suggestionSession;
}

- (id)initWithManager:(id)a0;
- (void).cxx_destruct;
- (unsigned short)questionType;
- (long long)questionOptions;
- (id)generateQuestionsWithLimit:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (id)randomAssetsUUIDsWithLimit:(unsigned long long)a0;

@end
