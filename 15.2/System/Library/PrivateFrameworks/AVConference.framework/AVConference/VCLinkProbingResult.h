@class NSNumber, NSMutableArray, NSArray;

@interface VCLinkProbingResult : NSObject {
    struct { unsigned char linkProbingCapabilityVersion; unsigned int linkProbingQueryResultsInterval; double expMovMeanFactor; double envelopeAttackFactor; double envelopeDecayFactor; NSArray *plrBuckets; } _linkProbingResultConfig;
}

@property (readonly) unsigned int reorderedPacketsCount;
@property (readonly) unsigned int sentRequestCount;
@property (readonly) unsigned int receivedResponseCount;
@property (readonly) NSMutableArray *requestTimestampAndRTTList;
@property (readonly) NSNumber *expMovMeanRTT;
@property (readonly) NSNumber *plrEnvelopeValue;
@property (readonly) NSNumber *plrTier;

- (id)description;
- (void)dealloc;
- (void)updateProbingResult:(id)a0 initialResult:(BOOL)a1;
- (void)updateLinkStatsWithArrivingNewValueMeanRTT:(double)a0 arrivingNewValuePLR:(double)a1;
- (unsigned char)getPLRTierFromPLREnvelope:(double)a0;
- (id)initWithProbingResults:(id)a0 linkProbingResultConfig:(struct { unsigned char x0; unsigned int x1; double x2; double x3; double x4; id x5; })a1;
- (void)mergeProbingResults:(id)a0;

@end
