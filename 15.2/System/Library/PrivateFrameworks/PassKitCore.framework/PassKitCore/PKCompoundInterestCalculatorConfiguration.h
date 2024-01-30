@class NSDecimalNumber, NSArray, NSTimeZone, NSCalendar, NSDate;

@interface PKCompoundInterestCalculatorConfiguration : NSObject {
    NSCalendar *_calendar;
}

@property (nonatomic) unsigned long long calculationMethod;
@property (retain, nonatomic, setter=setAPR:) NSDecimalNumber *apr;
@property (nonatomic) long long compoundingPeriods;
@property (retain, nonatomic) NSDate *periodStartDate;
@property (retain, nonatomic) NSDate *periodEndDate;
@property (retain, nonatomic) NSDecimalNumber *periodStartingBalance;
@property (retain, nonatomic) NSDecimalNumber *remainingPeriodStartingBalance;
@property (retain, nonatomic) NSDecimalNumber *remainingPeriodStartingBalanceForGracePurposes;
@property (retain, nonatomic) NSDecimalNumber *remainingPeriodMinimumPayment;
@property (retain, nonatomic) NSDecimalNumber *remainingPeriodMinimumPaymentExcludedFromInterestCalculation;
@property (retain, nonatomic) NSDecimalNumber *currentBalance;
@property (nonatomic) BOOL inGrace;
@property (nonatomic) BOOL isInDisasterRecovery;
@property (retain, nonatomic) NSDecimalNumber *unpostedInterest;
@property (retain, nonatomic) NSDate *unpostedInterestTimestamp;
@property (copy, nonatomic) NSArray *periodTransactions;
@property (copy, nonatomic) NSArray *futurePayments;
@property (retain, nonatomic) NSTimeZone *productTimeZone;

+ (id)configurationWithCreditAccount:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithCreditAccount:(id)a0;
- (long long)_daysInYearForDate:(id)a0 withTimeZone:(id)a1;

@end
