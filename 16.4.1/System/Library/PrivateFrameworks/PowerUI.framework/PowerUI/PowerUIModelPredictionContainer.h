@class NSString;

@interface PowerUIModelPredictionContainer : NSObject

@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) double engagementConfidence;
@property (readonly, nonatomic) double smartChargeDuration;

- (void).cxx_destruct;
- (id)initInvalidEntry:(unsigned long long)a0 withEngagementConfidence:(double)a1 withSmartChargeDuration:(double)a2 withModelVersion:(id)a3;
- (id)initWithEngagementConfidence:(double)a0 withSmartChargeDuration:(double)a1 withModelVersion:(id)a2;

@end
