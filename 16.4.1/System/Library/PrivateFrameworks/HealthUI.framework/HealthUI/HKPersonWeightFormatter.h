@class NSMassFormatter;

@interface HKPersonWeightFormatter : NSObject {
    NSMassFormatter *_massFormatter;
}

@property (readonly, nonatomic) long long localWeightUnit;

+ (id)sharedFormatter;

- (void)_commonInit;
- (void)_localeChanged:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)stringFromWeightInKilograms:(id)a0;
- (void)_updateRoundingIncrement;
- (id)stringFromWeightValue:(double)a0 inUnit:(long long)a1;

@end
