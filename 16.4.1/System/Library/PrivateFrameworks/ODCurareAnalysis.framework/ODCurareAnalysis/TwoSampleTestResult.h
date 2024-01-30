@class NSString, NSNumber, NSDate;

@interface TwoSampleTestResult : NSObject

@property (nonatomic) BOOL testRan;
@property (retain, nonatomic) NSString *testSkippedReason;
@property (retain, nonatomic) NSNumber *testStatistic;
@property (retain, nonatomic) NSNumber *rejectNullHypothesis;
@property (nonatomic) long long sampleSize1;
@property (nonatomic) long long numSuccesses1;
@property (retain, nonatomic) NSDate *minTimestamp1;
@property (retain, nonatomic) NSDate *maxTimestamp1;
@property (nonatomic) long long sampleSize2;
@property (nonatomic) long long numSuccesses2;
@property (retain, nonatomic) NSDate *minTimestamp2;
@property (retain, nonatomic) NSDate *maxTimestamp2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTestRan:(BOOL)a0 testSkippedReason:(id)a1 testStatistic:(id)a2 rejectNullHypothesis:(id)a3 sampleSize1:(long long)a4 numSuccesses1:(long long)a5 minTimestamp1:(id)a6 maxTimestamp1:(id)a7 sampleSize2:(long long)a8 numSuccesses2:(long long)a9 minTimestamp2:(id)a10 maxTimestamp2:(id)a11;

@end
