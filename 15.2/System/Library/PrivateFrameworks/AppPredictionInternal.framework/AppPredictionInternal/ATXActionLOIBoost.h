@class NSDictionary;

@interface ATXActionLOIBoost : NSObject {
    NSDictionary *_boostDictionary;
}

+ (id)sharedInstance;
+ (double)decayRateWithScale:(double)a0 distance:(double)a1;

- (double)boostForActionKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithBoostDictionary:(id)a0;

@end
