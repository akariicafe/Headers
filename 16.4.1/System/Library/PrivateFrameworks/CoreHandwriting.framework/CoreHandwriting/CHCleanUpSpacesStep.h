@class NSLocale;

@interface CHCleanUpSpacesStep : CHPostprocessingStepModifyingOriginalTokens

@property (retain, nonatomic) NSLocale *locale;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)cleanUpSpacesInToken:(id)a0 leftContext:(id)a1 inString:(id)a2 withQuoteCount:(id)a3;
- (id)prepareQuoteCountFromLeftContext:(id)a0;
- (id)process:(id)a0 options:(id)a1;

@end
