@class NSString, NSNumber, NSDate;

@interface TestResult : NSObject

@property (nonatomic) BOOL testRan;
@property (retain, nonatomic) NSString *testSkippedReason;
@property (retain, nonatomic) NSNumber *pValue;
@property (retain, nonatomic) NSNumber *rejectNullHypothesis;
@property (nonatomic) long long sampleSize;
@property (nonatomic) long long numSuccesses;
@property (retain, nonatomic) NSDate *minTimestamp;
@property (retain, nonatomic) NSDate *maxTimestamp;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTestRan:(BOOL)a0 testSkippedReason:(id)a1 pValue:(id)a2 rejectNullHypothesis:(id)a3 sampleSize:(long long)a4 numSuccesses:(long long)a5 minTimestamp:(id)a6 maxTimestamp:(id)a7;

@end
