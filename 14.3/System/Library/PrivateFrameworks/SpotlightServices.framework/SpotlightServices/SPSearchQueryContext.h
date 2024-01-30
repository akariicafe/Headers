@class NSString, NSArray, SFSearchSuggestion;

@interface SPSearchQueryContext : NSObject

@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSArray *markedTextArray;
@property (readonly, getter=getTrimmedSearchString) NSString *trimmedSearchString;
@property (readonly, nonatomic) BOOL hasMarkedText;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (retain, nonatomic) NSString *keyboardPrimaryLanguage;
@property (retain, nonatomic) NSArray *searchDomains;
@property (retain, nonatomic) NSArray *disabledDomains;
@property (retain, nonatomic) NSArray *disabledBundles;
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
@property (retain, nonatomic) SFSearchSuggestion *engagedSuggestion;
@property (nonatomic) BOOL isPasscodeLocked;
@property (readonly, nonatomic) NSString *displayedText;
@property (retain, nonatomic) NSArray *disabledApps;
@property (retain, nonatomic) NSArray *searchEntities;
@property (nonatomic) BOOL promoteLocalResults;
@property (nonatomic) BOOL promoteParsecResults;

+ (id)queryContextWithSearchString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSearchString:(id)a0;

@end
