@class NSDate;

@interface TADisplayOnCalculator : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL useBudget;
@property (nonatomic) double budgetRemaining;
@property (retain, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *evaluatedUntil;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (double)calculateDisplayOnWithEvents:(id)a0 advertisements:(id)a1 endDate:(id)a2;
- (void)completeDisplayOnWithEndDate:(id)a0;
- (id)initWithStartTime:(id)a0;
- (id)initWithStartTime:(id)a0 budget:(double)a1;

@end
