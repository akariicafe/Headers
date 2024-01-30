@class NSNumber;

@interface CVNLPInformationStream : NSObject {
    double _decodingWeightValue;
    double _lowerBoundLogProbabilityValue;
}

@property (readonly, nonatomic) NSNumber *decodingWeight;
@property (readonly, nonatomic) NSNumber *lowerBoundLogProbability;

+ (id)defaultLowerBoundLogProbability;
+ (id)defaultDecodingWeight;

- (void).cxx_destruct;
- (id)initWithDecodingWeight:(id)a0 lowerBoundLogProbability:(id)a1;
- (id)initWithDecodingWeight:(id)a0;
- (double)decodingWeightValue;
- (double)lowerBoundLogProbabilityValue;

@end
