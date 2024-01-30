@class PKAccount;

@interface PKPaymentEligibilitySupplementaryData : NSObject

@property (readonly, copy, nonatomic) PKAccount *lightweightAccount;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 accountFeatureIdentifier:(unsigned long long)a1;

@end
