@class NSDictionary, NSArray;

@interface HDDemoDataFoodDatabase : NSObject {
    NSDictionary *_dietaryNutrientDailyValues;
    NSDictionary *_canonicalDietaryUnits;
    NSArray *_beverages;
    NSArray *_breakfastFoods;
    NSArray *_lunchFoods;
    NSArray *_snackFoods;
    NSArray *_dinnerFoods;
}

- (id)coffee;
- (void).cxx_destruct;
- (id)init;
- (id)canonicalDietaryUnitForQuantityTypeIdentifier:(id)a0;
- (id)randomFoodForType:(long long)a0;
- (double)dailyValueForDietaryNutrientIdentifier:(id)a0;

@end
