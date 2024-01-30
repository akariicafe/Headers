@class NSArray, NSString, SPSearchQueryContext;

@interface SPSearchQuery : NSObject <NSCopying> {
    unsigned long long _queryID;
    NSString *_searchString;
    NSString *_keyboardLanguage;
    NSString *_keyboardPrimaryLanguage;
    double _scaleFactor;
    NSArray *markedTextArray;
    BOOL _finished;
    _Atomic BOOL _cancelled;
}

@property (readonly, nonatomic) SPSearchQueryContext *queryContext;
@property (readonly, nonatomic) BOOL cancelled;
@property (nonatomic) BOOL grouped;
@property (nonatomic) long long maxCount;
@property (retain, nonatomic) NSArray *disabledBundles;
@property (retain, nonatomic) NSArray *disabledApps;
@property (nonatomic) BOOL noTokenize;
@property (nonatomic) BOOL infinitePatience;
@property (nonatomic) BOOL isWideScreen;
@property (nonatomic) unsigned long long queryIdent;
@property (nonatomic) BOOL promoteLocalResults;
@property (nonatomic) BOOL promoteParsecResults;
@property (nonatomic) BOOL internalDebug;
@property (nonatomic) BOOL internalValidation;
@property (nonatomic) long long contentFilters;
@property (readonly, nonatomic) double creationTime;
@property (readonly, nonatomic) double cancellationTime;
@property (readonly, nonatomic) unsigned long long creationStamp;
@property (readonly, nonatomic) double currentTime;

- (BOOL)hasMarkedText;
- (void)execute:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)cancel;
- (id)initWithSearchQueryContext:(id)a0;
- (id)initWithQuery:(id)a0 domains:(id)a1;

@end
