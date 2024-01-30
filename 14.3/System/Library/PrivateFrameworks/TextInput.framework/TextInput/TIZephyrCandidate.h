@class NSString, _ICPredictedItem, TIProactiveTrigger;

@interface TIZephyrCandidate : TIKeyboardCandidateSingle {
    BOOL _isSecureContentCandidate;
    unsigned int _usageTrackingMask;
    unsigned int _sourceMask;
    unsigned long long _wordOriginFeedbackID;
    TIProactiveTrigger *_proactiveTrigger;
    NSString *_responseKitCategory;
}

@property (nonatomic) BOOL isFromPhraseDictionary;
@property (nonatomic) BOOL isFromTextChecker;
@property (nonatomic, getter=isContinuousPathConversion) BOOL continuousPathConversion;
@property (nonatomic, getter=shouldAccept) BOOL shouldAccept;
@property (nonatomic, getter=shouldInsertSpaceAfterSelection) BOOL shouldInsertSpaceAfterSelection;
@property (nonatomic, getter=confidence) int confidence;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *fromBundleId;
@property (nonatomic) unsigned long long ageForConnectionsMetrics;
@property (nonatomic) double excessPathRatio;
@property (copy, nonatomic) _ICPredictedItem *proactivePredictedItem;
@property (nonatomic) double geometryScore;
@property (nonatomic) double wordScore;
@property (nonatomic) NSString *lexiconLocale;
@property (nonatomic) int dynamicUsageCount;
@property (nonatomic) int dynamicPenaltyCount;

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (id)initWithCandidate:(id)a0 forInput:(id)a1 wordOriginFeedbackID:(unsigned long long)a2 usageTrackingMask:(unsigned int)a3 sourceMask:(unsigned int)a4 secureContentCandidate:(BOOL)a5 proactiveTrigger:(id)a6 proactivePredictedItem:(id)a7 responseKitCategory:(id)a8;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 wordOriginFeedbackID:(unsigned long long)a2 usageTrackingMask:(unsigned int)a3 sourceMask:(unsigned int)a4 secureContentCandidate:(BOOL)a5 proactiveTrigger:(id)a6 proactivePredictedItem:(id)a7;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)sourceMask;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)proactiveTrigger;
- (BOOL)isAutocorrection;
- (id)responseKitCategory;
- (unsigned long long)wordOriginFeedbackID;
- (id)initWithCoder:(id)a0;
- (id)description;
- (unsigned int)usageTrackingMask;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 wordOriginFeedbackID:(unsigned long long)a2;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 wordOriginFeedbackID:(unsigned long long)a2 usageTrackingMask:(unsigned int)a3 sourceMask:(unsigned int)a4;
- (id)initWithCandidate:(id)a0 responseKitCategory:(id)a1;
- (id)candidateByReplacingWithCandidate:(id)a0 input:(id)a1 label:(id)a2;
- (BOOL)isSecureContentCandidate;
- (void)encodeWithCoder:(id)a0;

@end
