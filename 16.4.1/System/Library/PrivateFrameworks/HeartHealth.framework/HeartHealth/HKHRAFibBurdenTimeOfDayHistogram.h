@class HKHRAFibBurdenAnalysisResult;

@interface HKHRAFibBurdenTimeOfDayHistogram : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *midnightToFourAMBurden;
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *fourAMtoEightAMBurden;
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *eightAMToNoonBurden;
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *noonToFourPMBurden;
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *fourPMToEightPMBurden;
@property (readonly, nonatomic) HKHRAFibBurdenAnalysisResult *eightPMToMidnightBurden;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithMidnightToFourAMBurden:(id)a0 fourAMtoEightAMBurden:(id)a1 eightAMToNoonBurden:(id)a2 noonToFourPMBurden:(id)a3 fourPMToEightPMBurden:(id)a4 eightPMToMidnightBurden:(id)a5;

@end
