@interface CNContactSubsetCalculator : NSObject

+ (BOOL)_isLabel:(id)a0 subsumableIntoLabel:(id)a1 equivalencies:(id)a2;
+ (BOOL)_isLabeledValue:(id)a0 availableInLabeledValues:(id)a1 claimedIndices:(id)a2 forMultiValueProperty:(id)a3;
+ (BOOL)isContact:(id)a0 subsetOfContact:(id)a1 forMultiValueProperty:(id)a2;
+ (BOOL)isContact:(id)a0 subsetOfContact:(id)a1 forSingleValueProperty:(id)a2;
+ (BOOL)isContact:(id)a0 subsetOfContact:(id)a1 ignoringProperties:(id)a2;

@end
