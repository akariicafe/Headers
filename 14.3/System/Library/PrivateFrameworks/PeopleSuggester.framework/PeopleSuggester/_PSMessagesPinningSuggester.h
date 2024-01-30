@class NSString, NSDictionary, _CDInteractionStore, NSXPCConnection;

@interface _PSMessagesPinningSuggester : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_connection;
}

@property (retain) NSDictionary *psMessagesPinningConfig;
@property (nonatomic) double regularityThreshold;
@property (nonatomic) double intensityThreshold;
@property (nonatomic) double regularityWeight;
@property (nonatomic) double intensityWeight;
@property (nonatomic) long long minimalInteractions;
@property (nonatomic) long long minimalUniqueDaysInteracted;
@property (nonatomic) double lookbackWindow;
@property (nonatomic) BOOL boostGroups;
@property (nonatomic) BOOL outgoingOnly;
@property (nonatomic) BOOL boostIndividualFavorites;
@property (retain, nonatomic) NSString *configVersion;
@property (retain, nonatomic) _CDInteractionStore *interactionStore;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRegularityThreshold:(double)a0 intensityThreshold:(double)a1 regularityWeight:(double)a2 intensityWeight:(double)a3 minimalInteration:(long long)a4 minimalUniqueDaysInteracted:(long long)a5 interactionStore:(id)a6 lookbackWindow:(double)a7 outgoingOnly:(BOOL)a8;
- (id)chatGuidsForPinningHeuristicApproachWithMaxSuggestions:(long long)a0 forReferenceDate:(id)a1;
- (id)chatGuidsBasedOnRegularityAndIntensityWithMaxSuggestions:(long long)a0 referenceDate:(id)a1 minimumDaysOfHistory:(long long)a2 maxInteractionsForQuery:(long long)a3;
- (void)submitMessagesPinningFeedback:(id)a0;
- (id)getPayloadOfFeedback:(id)a0;
- (void)updateModelProperties:(id)a0;
- (id)initWithRegularityThreshold:(double)a0 intensityThreshold:(double)a1 regularityWeight:(double)a2 intensityWeight:(double)a3 minimalInteration:(long long)a4 minimalUniqueDaysInteracted:(long long)a5 interactionStore:(id)a6 lookbackWindow:(double)a7;
- (BOOL)loadPSConfig:(id)a0;
- (void)provideMessagesPinningFeedback:(id)a0;
- (id)chatGuidsForMessagesPinningWithMaxSuggestions:(long long)a0;

@end
