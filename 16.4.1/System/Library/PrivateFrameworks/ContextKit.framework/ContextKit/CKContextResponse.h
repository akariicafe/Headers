@class CKContextFingerprintMinHash, NSString, NSArray, NSError, NSDate, CKContextRequest;

@interface CKContextResponse : NSObject <NSSecureCoding> {
    BOOL _discarded;
    double _hideCompletionsTimeLimit;
    _Atomic BOOL _shown;
    _Atomic BOOL _engaged;
    _Atomic BOOL _transactionSuccessful;
    _Atomic BOOL _shownLogged;
    _Atomic BOOL _engagementLogged;
    _Atomic BOOL _transactionLogged;
    NSArray *_loggingCouldHaveShown;
    _Atomic unsigned int _loggingShownMax;
    _Atomic BOOL _loggingServerOverride;
    _Atomic unsigned int _loggingCouldHaveShownMax;
    _Atomic unsigned int _loggingInputLengthMax;
}

@property (class, readonly, nonatomic) NSError *serviceDisabledError;
@property (class, readonly, nonatomic) NSError *serviceBusyError;
@property (class, readonly, nonatomic) NSError *missingEntitlementError;
@property (class, readonly, nonatomic) NSError *invalidProcessError;
@property (class, readonly, nonatomic) NSError *timeoutError;
@property (class, readonly, nonatomic) NSError *malformedRequestError;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL resultsNeedFiltering;
@property (nonatomic) unsigned long long mustPrefixMatchLength;
@property (retain, nonatomic) NSDate *hideCompletionsAfterDate;
@property (retain, nonatomic) NSDate *responseDate;
@property (retain, nonatomic) CKContextRequest *debugRequest;
@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSArray *level1Topics;
@property (retain, nonatomic) NSArray *level2Topics;
@property (retain, nonatomic) NSArray *donorBundleIdentifiers;
@property (retain, nonatomic) NSString *languageTag;
@property (retain, nonatomic) NSString *debug;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) struct CGSize { double width; double height; } availableLayoutSize;
@property (retain, nonatomic) CKContextFingerprintMinHash *requestFingerprint;

- (void)encodeWithCoder:(id)a0;
- (id)initPlaceholderWithUUID:(id)a0 requestType:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)completer;
- (void)markResultsShown:(unsigned long long)a0 serverOverride:(BOOL)a1 forInputLength:(unsigned long long)a2 results:(id)a3;
- (void)setHideCompletionsTimeLimit:(double)a0;
- (BOOL)isPlaceholder;
- (void)discardAndLogCompleter:(id)a0 likelyUnsolicited:(BOOL)a1;
- (void)discard;
- (void)logTransactionSuccessfulForInputLength:(unsigned long long)a0 completion:(id)a1 likelyUnsolicited:(BOOL)a2;
- (id)initWithResults:(id)a0 requestType:(unsigned long long)a1;
- (void)logEngagement:(id)a0 forInputLength:(unsigned long long)a1 completion:(id)a2 likelyUnsolicited:(BOOL)a3;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)toJSONSerializableDictionary;
- (void)appendToDebug:(id)a0;
- (unsigned long long)hash;
- (id)resultByQuery:(id)a0;
- (void)addDebug:(id)a0;
- (id)responseSummary:(BOOL)a0 showHigherLevelTopics:(BOOL)a1 maxPrefix:(long long)a2;
- (void).cxx_destruct;
- (id)initWithError:(id)a0 requestType:(unsigned long long)a1;

@end
