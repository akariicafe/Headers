@class HAMenstrualAlgorithmsDeviation;

@interface HAMenstrualAlgorithmsDeviationAnalysis : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HAMenstrualAlgorithmsDeviation *irregularBleeding;
@property (retain, nonatomic) HAMenstrualAlgorithmsDeviation *infrequentBleeding;
@property (retain, nonatomic) HAMenstrualAlgorithmsDeviation *prolongedBleeding;
@property (retain, nonatomic) HAMenstrualAlgorithmsDeviation *spotting;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
