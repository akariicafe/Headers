@class NSString;

@interface HREActionVariance : HRERule

@property (readonly, nonatomic) NSString *key;

+ (id)varianceKeyForAction:(id)a0;

- (void).cxx_destruct;
- (id)_initWithKey:(id)a0;
- (BOOL)passesForAction:(id)a0;

@end
