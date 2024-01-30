@class NSDictionary, NSDate;

@interface ARPPredictionContext : NSObject

@property (readonly, nonatomic) NSDictionary *microLocationProbabilityVector;
@property (readonly, copy, nonatomic) NSDate *microLocationEventDate;
@property (readonly, copy, nonatomic) NSDate *predictionDate;

- (id)initWithPredictionDate:(id)a0 microLocationEventDate:(id)a1 microLocationProbabilityVector:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
