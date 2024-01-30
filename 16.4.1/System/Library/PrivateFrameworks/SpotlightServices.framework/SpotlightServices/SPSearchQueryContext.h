@class NSString, NSArray, SPSearchSuggestionResult, CSAttributeEvaluator;

@interface SPSearchQueryContext : NSObject {
    CSAttributeEvaluator *_evaluator;
    CSAttributeEvaluator *_evaluatorForPersonMatching;
}

@property (retain, nonatomic) NSString *searchString;
@property (readonly, nonatomic) NSString *normalizedSearchString;
@property (retain, nonatomic) NSArray *markedTextArray;
@property (readonly, getter=getTrimmedSearchString) NSString *trimmedSearchString;
@property (readonly, nonatomic) BOOL hasMarkedText;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (retain, nonatomic) NSString *keyboardPrimaryLanguage;
@property (retain, nonatomic) NSArray *searchDomains;
@property (retain, nonatomic) NSArray *disabledDomains;
@property (retain, nonatomic) NSArray *disabledBundles;
@property (retain, nonatomic) NSArray *groupingRules;
@property (nonatomic) BOOL forceQueryEvenIfSame;
@property (nonatomic) unsigned long long whyQuery;
@property (nonatomic) unsigned long long queryKind;
@property (nonatomic) unsigned long long whyClear;
@property (nonatomic) unsigned long long queryIdent;
@property (nonatomic) double currentTime;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL allowInternet;
@property (nonatomic) BOOL noTokenize;
@property (nonatomic) BOOL internalDebug;
@property (nonatomic) BOOL internalValidation;
@property (nonatomic) BOOL disableOCR;
@property (nonatomic) BOOL isAdvancedSyntax;
@property (retain, nonatomic) SPSearchSuggestionResult *engagedSuggestion;
@property (retain, nonatomic) NSArray *searchEntities;
@property (nonatomic) BOOL isPasscodeLocked;
@property (readonly, nonatomic) NSString *displayedText;
@property (retain, nonatomic) NSArray *disabledApps;
@property (nonatomic) BOOL promoteLocalResults;
@property (nonatomic) BOOL promoteParsecResults;

+ (id)queryContextWithSearchString:(id)a0;

- (id)evaluator;
- (id)evaluatorWithSearchString:(id)a0;
- (id)evaluatorForPersonMatching;
- (id)init;
- (id)initWithSearchString:(id)a0;
- (void).cxx_destruct;

@end
