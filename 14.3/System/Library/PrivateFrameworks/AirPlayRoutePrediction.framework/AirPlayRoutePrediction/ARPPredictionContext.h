@class NSDictionary, NSDate;

@interface ARPPredictionContext : NSObject

@property (readonly, nonatomic) NSDictionary *microLocationProbabilityVector;
@property (readonly, copy, nonatomic) NSDate *microLocationEventDate;
@property (readonly, copy, nonatomic) NSDate *predictionDate;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPredictionDate:(id)a0 microLocationEventDate:(id)a1 microLocationProbabilityVector:(id)a2;

@end
