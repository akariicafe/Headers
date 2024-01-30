@class NSString, NSDictionary;

@interface CSVTUIASRGrammars : NSObject <NSURLSessionDelegate> {
    NSDictionary *_grammar;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedGrammars;

- (void).cxx_destruct;
- (id)init;
- (id)getTrailingPatternsForUtt:(long long)a0 Locale:(id)a1;
- (id)getLeadingPatternsForUtt:(long long)a0 Locale:(id)a1;
- (id)getRegexPatternsForUtt:(long long)a0 Locale:(id)a1;
- (id)getLMEforLocale:(id)a0;
- (id)createGrammars;
- (id)_getTrailingPatternsWithGrammars:(id)a0 withLocale:(id)a1;
- (id)_getLeadingPatternsWithGrammars:(id)a0 withLocale:(id)a1;
- (id)_getRegexPatternsWithGrammars:(id)a0 withUtt:(long long)a1 withLocale:(id)a2;
- (id)_getLMEWithGrammar:(id)a0 withLocale:(id)a1;

@end
