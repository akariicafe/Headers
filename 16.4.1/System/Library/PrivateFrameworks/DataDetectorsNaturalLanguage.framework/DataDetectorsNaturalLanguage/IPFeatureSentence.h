@class NSString, RKText, NSArray;

@interface IPFeatureSentence : IPFeature {
    BOOL _hasCheckedEventVocabularyKeyword;
    BOOL _hasCheckedEventVocabularyIgnoreDateKeyword;
}

@property (copy) NSString *languageID;
@property (retain) RKText *responseKitSentence;
@property unsigned long long storedPolarity;
@property (copy) NSString *storedEventVocabularyRejectionKeyword;
@property (copy) NSString *storedEventVocabularyIgnoreDateKeyword;
@property (copy) NSArray *fragments;
@property (readonly, copy) NSString *eventVocabularyRejectionKeyword;
@property (readonly, copy) NSString *eventVocabularyIgnoreDateKeyword;
@property (readonly, getter=isQuoteAttributionLine) BOOL quoteAttributionLine;
@property (readonly) unsigned long long clusterType;
@property (readonly) unsigned long long polarity;

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeExcludingLeadingAndTrailingCharacters:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 ofString:(id)a2;
+ (id)_substringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofString:(id)a1 removingCharactersFromSet:(id)a2;
+ (id)bestLanguageIDFromText:(id)a0;
+ (id)bestLanguageIDFromText:(id)a0 linesElided:(unsigned long long)a1;
+ (id)buildRegexForType:(id)a0 languageID:(id)a1;
+ (id)eventVocabularyIgnoreDateKeywordInString:(id)a0 languageID:(id)a1;
+ (id)eventVocabularyIgnoreDateRegexForLanguageID:(id)a0;
+ (id)eventVocabularyPositiveRegexForLanguageID:(id)a0;
+ (id)eventVocabularyRegexForType:(id)a0 languageID:(id)a1;
+ (id)eventVocabularyRejectionKeywordInString:(id)a0 languageID:(id)a1;
+ (id)eventVocabularyRejectionRegexForLanguageID:(id)a0;
+ (id)eventVocabularySubjectTitleInString:(id)a0 languageID:(id)a1;
+ (id)eventVocabularySubjectTitleRegexForLanguageID:(id)a0;
+ (id)humanReadableFeaturePolarity:(unsigned long long)a0;
+ (unsigned long long)numberOfMatchesForEventVocabularySubjectTitleInString:(id)a0 languageID:(id)a1;
+ (id)regexArrayForType:(id)a0 languageID:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)addFragment:(id)a0;
- (void)checkEventVocabularyKeywordsIfNeeded;
- (id)descriptionForFragment:(id)a0;
- (id)descriptionForFragmentAtIndex:(unsigned long long)a0;
- (id)initWithLanguageID:(id)a0 responseKitSentence:(id)a1;
- (unsigned long long)polarityForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)polarityForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 confidence:(double *)a1;

@end
