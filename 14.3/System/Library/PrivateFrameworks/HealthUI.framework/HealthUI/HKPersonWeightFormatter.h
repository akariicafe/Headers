@class NSMassFormatter;

@interface HKPersonWeightFormatter : NSObject {
    NSMassFormatter *_massFormatter;
}

@property (readonly, nonatomic) long long localWeightUnit;

+ (id)sharedFormatter;

- (void)_commonInit;
- (void)_localeChanged:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)stringFromWeightValue:(double)a0 inUnit:(long long)a1;
- (id)stringFromWeightInKilograms:(id)a0;
- (void)_updateRoundingIncrement;

@end
