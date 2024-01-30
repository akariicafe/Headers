@class PKCompoundInterestCalculatorConfiguration, NSCalendar, NSMutableDictionary;

@interface PKCompoundInterestCalculator : NSObject {
    NSCalendar *_calendar;
    NSMutableDictionary *_toDateCache;
}

@property (readonly, nonatomic) PKCompoundInterestCalculatorConfiguration *configuration;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)compoundInterest;
- (BOOL)_interestCanBeCalculated;
- (id)compoundInterestWithPaymentOfAmount:(id)a0;
- (id)compoundInterestForPaymentOfAmount:(id)a0 onDate:(id)a1;
- (BOOL)_date:(id)a0 isApplicableForProcessingDate:(id)a1;
- (id)_rawCompoundInterestForPaymentOfAmount:(id)a0 onDate:(id)a1 includeNewBalance:(BOOL)a2;
- (id)_additionalBalanceForProcessingDate:(id)a0;
- (id)_rawUnpostedInterestCalculationForPaymentOfAmount:(id)a0 onDate:(id)a1 includeNewPurchases:(BOOL)a2;
- (id)_creditsForProcessingDate:(id)a0;

@end
