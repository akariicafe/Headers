@class NSDictionary, NSSet;

@interface EDPromotionMLModelOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long promo;
@property (retain, nonatomic) NSDictionary *promoProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithPromo:(long long)a0 promoProbability:(id)a1;

@end
