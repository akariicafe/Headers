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
- (double)decodingWeightValue;
- (id)initWithDecodingWeight:(id)a0;
- (id)initWithDecodingWeight:(id)a0 lowerBoundLogProbability:(id)a1;
- (double)lowerBoundLogProbabilityValue;

@end
