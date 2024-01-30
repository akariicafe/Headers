@class NSNumber, NSLengthFormatter;

@interface HKPersonHeightFormatter : NSObject {
    NSLengthFormatter *_heightFormatter;
    NSNumber *_usesImperialUnits;
}

@property (readonly, nonatomic) BOOL usesImperialUnits;

+ (id)sharedFormatter;

- (void)_localeChanged:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)formattedValueForFeet:(double)a0;
- (id)formattedValueForInches:(double)a0;
- (id)localizedStringFromHeightInCentimeters:(id)a0;
- (void)getFeet:(long long *)a0 inches:(long long *)a1 fromCentimeters:(double)a2;
- (double)centimetersFromFeet:(double)a0 inches:(double)a1;
- (id)formattedValueForCentimeters:(double)a0;

@end
