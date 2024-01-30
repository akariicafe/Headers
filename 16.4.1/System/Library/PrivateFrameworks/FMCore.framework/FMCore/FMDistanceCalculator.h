@class NSNumberFormatter, NSLocale, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, FMDistanceCalculatorLocalizationDelegate;

@interface FMDistanceCalculator : NSObject

@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSLocale *measurementSystemLocale;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calculationQueue;
@property (retain, nonatomic) NSNumberFormatter *formatter;
@property (nonatomic) long long measurementSystem;
@property (weak, nonatomic) NSObject<FMDistanceCalculatorLocalizationDelegate> *localizationDelegate;

- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)_localizedDistanceFromLocation:(id)a0 toLocation:(id)a1;
- (id)_localizedStringFromNumber:(id)a0 numberStyle:(unsigned long long)a1 fractionDigits:(unsigned long long)a2;
- (id)_scaledAndConvertedMin:(double)a0 andMax:(double)a1;
- (double)averageDistanceFromLocation:(id)a0 toLocation:(id)a1;
- (id)futureLocalizedDistanceFromLocation:(id)a0 toLocation:(id)a1;
- (id)initWithDefaultsSuiteName:(id)a0;
- (id)initWithDefaultsSuiteName:(id)a0 locale:(id)a1;
- (id)initWithDefaultsSuiteName:(id)a0 locale:(id)a1 measurementSystemLocale:(id)a2;
- (id)localizedDistanceFromLocation:(id)a0 toLocation:(id)a1;
- (id)localizedStringForKey:(id)a0 value:(id)a1;

@end
