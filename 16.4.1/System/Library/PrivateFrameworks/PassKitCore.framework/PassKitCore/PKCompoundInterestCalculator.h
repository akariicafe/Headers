@class PKCompoundInterestCalculatorConfiguration, NSCalendar, NSMutableDictionary;

@interface PKCompoundInterestCalculator : NSObject {
    NSCalendar *_calendar;
    NSMutableDictionary *_toDateCache;
}

@property (readonly, nonatomic) PKCompoundInterestCalculatorConfiguration *configuration;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)_additionalBalanceForProcessingDate:(id)a0;
- (id)_creditsForProcessingDate:(id)a0;
- (BOOL)_date:(id)a0 isApplicableForProcessingDate:(id)a1;
- (BOOL)_interestCanBeCalculated;
- (id)_rawCompoundInterestForPaymentOfAmount:(id)a0 onDate:(id)a1 includeNewBalance:(BOOL)a2;
- (id)_rawUnpostedInterestCalculationForPaymentOfAmount:(id)a0 onDate:(id)a1 includeNewPurchases:(BOOL)a2;
- (id)compoundInterest;
- (id)compoundInterestForPaymentOfAmount:(id)a0 onDate:(id)a1;
- (id)compoundInterestWithPaymentOfAmount:(id)a0;

@end
