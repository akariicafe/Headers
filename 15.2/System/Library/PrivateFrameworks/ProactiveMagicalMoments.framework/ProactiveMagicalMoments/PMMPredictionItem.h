@class NSString, NSDictionary;

@interface PMMPredictionItem : NSObject

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) unsigned long long predictionSource;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) NSDictionary *reasonMetadata;
@property (readonly, nonatomic) long long anchorType;
@property (readonly, nonatomic) double confidence;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)initWithBundleId:(id)a0 predictionSource:(unsigned long long)a1 reason:(long long)a2 reasonMetadata:(id)a3 anchorType:(long long)a4 confidence:(double)a5;
- (BOOL)isEqualToPredictionItem:(id)a0;

@end
