@class NSDictionary;

@interface ATXMagicalMomentsSignals : NSObject

@property (readonly, nonatomic) unsigned long long predictionSource;
@property (readonly, nonatomic) long long pmmReason;
@property (readonly, nonatomic) NSDictionary *reasonMetadata;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) long long anchorType;
@property (readonly, nonatomic) unsigned long long predictionIndex;

+ (unsigned long long)pmmReasonToATXSuggestionReason:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)atxReason;
- (id)initWithPredictionSource:(unsigned long long)a0 pmmReason:(long long)a1 reasonMetadata:(id)a2 confidence:(double)a3 anchorType:(long long)a4 index:(unsigned long long)a5;

@end
