@class NSMutableDictionary, NSArray, NSMutableSet, VCDispatchTimer, NSObject;
@protocol VCLinkProbingHandlerDelegate, OS_dispatch_queue;

@interface VCLinkProbingHandler : NSObject {
    id<VCLinkProbingHandlerDelegate> _linkProbingHandlerDelegate;
    VCDispatchTimer *_queryProbingResultsTimer;
    VCDispatchTimer *_probingLockdownTimer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_aggregatedProbingResults;
    NSArray *_linkPreferenceOrder;
    unsigned int _linkProbingInterval;
    unsigned int _linkProbingTimeout;
    unsigned int _linkProbingQueryResultsInterval;
    unsigned int _minSentRequestCountThreshold;
    unsigned char _linkProbingState;
    double _lastLinkPreferenceUpdateNotificationTime;
    double _linkProbingConnectionLockdownPeriod;
    double _expMovMeanFactor;
    double _plrEnvelopeAttackFactor;
    double _plrEnvelopeDecayFactor;
    NSArray *_plrBuckets;
    struct { unsigned char linkProbingCapabilityVersion; unsigned int linkProbingQueryResultsInterval; double expMovMeanFactor; double envelopeAttackFactor; double envelopeDecayFactor; NSArray *plrBuckets; } _linkProbingResultConfig;
    BOOL _isProbingLockedOut;
    double _probingStartTime;
    double _probingLockoutStartTime;
    double _linkProbingLockdownPeriod;
    unsigned int _linkProbingDuplicationWaitTimeout;
    unsigned int _consecutiveIdenticalQueryResultMax;
    unsigned int _consecutiveIdenticalQueryResultCount;
}

@property id<VCLinkProbingHandlerDelegate> linkProbingHandlerDelegate;
@property unsigned char linkProbingCapabilityVersion;
@property (readonly) BOOL isLinkProbingActive;
@property (readonly) NSMutableSet *activelyProbingLinkIDs;
@property BOOL isDuplicationEnabled;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)startActiveProbingOnLinks:(id)a0;
- (void)stopActiveProbingOnLinks:(id)a0 resetStats:(BOOL)a1;
- (void)updateProbingResults:(id)a0;
- (id)getProbingResultsForLinkID:(id)a0;
- (void)loadStorebagValues;
- (void)queryProbingResults;
- (void)probingLockdownEnded;
- (void)setLinkProbingResultConfig;
- (void)resetAggregatedProbingResults;
- (void)removeProbingResultsForLinks:(id)a0;
- (void)flushProbingResults:(id)a0;
- (void)dispatchedUpdateProbingResults:(id)a0;
- (BOOL)isValidProbingResult:(id)a0;
- (void)updateLinkPreferenceOrder;

@end
