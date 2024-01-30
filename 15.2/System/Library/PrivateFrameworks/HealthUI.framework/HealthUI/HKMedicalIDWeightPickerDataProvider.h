@interface HKMedicalIDWeightPickerDataProvider : NSObject

+ (long long)numberOfRows;
+ (double)defaultKilogramValue;
+ (long long)rowForWeightInKilograms:(double)a0;
+ (id)titleForRow:(long long)a0;
+ (double)getWeightInKilogramsForRow:(long long)a0;

@end
