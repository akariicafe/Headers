@class NSDictionary;

@interface SGNameInversionPredictor : NSObject {
    NSDictionary *_tradToTrie;
    NSDictionary *_tradToInversionRate;
    double _confidenceThreshold;
}

+ (id)sharedInstance;
+ (BOOL)shouldInvertFirst:(id)a0 last:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldInvertFirst:(id)a0 last:(id)a1;
- (double)firstNameLikelihood:(id)a0 underNamingTradition:(id)a1 default:(double)a2;
- (double)inversionRateForNamingTradition:(id)a0;
- (BOOL)shouldInvertFirst:(id)a0 last:(id)a1 underNamingTradition:(id)a2;

@end
