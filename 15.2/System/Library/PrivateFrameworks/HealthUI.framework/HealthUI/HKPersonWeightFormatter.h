@class NSMassFormatter;

@interface HKPersonWeightFormatter : NSObject {
    NSMassFormatter *_massFormatter;
}

@property (readonly, nonatomic) long long localWeightUnit;

+ (id)sharedFormatter;

- (void)_localeChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_commonInit;
- (void)dealloc;
- (id)stringFromWeightValue:(double)a0 inUnit:(long long)a1;
- (id)stringFromWeightInKilograms:(id)a0;
- (void)_updateRoundingIncrement;

@end
