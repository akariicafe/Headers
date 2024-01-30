@class NSString, NSDictionary, NSRegularExpression;

@interface AFPhonemeMapper : NSObject {
    NSString *_languageCode;
    NSDictionary *_phonemeMap;
    NSRegularExpression *_regex;
}

+ (id)_mapForLanguageCode:(id)a0;
+ (id)_buildRegexMatchingSubstrings:(id)a0;

- (void).cxx_destruct;
- (id)initWithLanguageCode:(id)a0;
- (id)stringByReplacingPhonemesInString:(id)a0;

@end
