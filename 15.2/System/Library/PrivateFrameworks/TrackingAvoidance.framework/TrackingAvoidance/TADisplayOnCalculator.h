@class NSDate;

@interface TADisplayOnCalculator : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL useBudget;
@property (nonatomic) double budgetRemaining;
@property (retain, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *evaluatedUntil;

- (double)calculateDisplayOnWithEvents:(id)a0 advertisements:(id)a1 endDate:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStartTime:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)completeDisplayOnWithEndDate:(id)a0;
- (id)initWithStartTime:(id)a0 budget:(double)a1;

@end
