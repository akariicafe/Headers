@class NSString, NSDictionary, NSArray;

@interface NLLanguageRecognizer : NSObject {
    void *_identifier;
    NSArray *_languageConstraints;
    NSDictionary *_languageHints;
}

@property (readonly, copy, nonatomic) NSString *dominantLanguage;
@property (copy, nonatomic) NSDictionary *languageHints;
@property (copy, nonatomic) NSArray *languageConstraints;

+ (id)dominantLanguageForString:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)processString:(id)a0;
- (id)languageHypothesesWithMaximum:(unsigned long long)a0;
- (void)processString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
