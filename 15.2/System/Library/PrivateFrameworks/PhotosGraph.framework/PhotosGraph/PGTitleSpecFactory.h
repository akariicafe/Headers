@interface PGTitleSpecFactory : NSObject

+ (id)specCollectionForMeaningLabel:(id)a0;
+ (id)specCollectionForMemoryCategory:(unsigned long long)a0 subcategory:(unsigned long long)a1;
+ (id)specCollectionForMemoryCategory:(unsigned long long)a0 subcategory:(unsigned long long)a1 personNodes:(id)a2;
+ (id)specCollectionForFoodieMemoryWithPersonNodes:(id)a0 locationName:(id)a1 tripTitleLocationType:(unsigned long long)a2 allowInspiredTastesTitle:(BOOL)a3 genericOnly:(BOOL)a4;
+ (id)_specForCelebration;
+ (id)_specForWedding;
+ (id)_specForBirthday;
+ (id)_specForAnniversary;
+ (id)_specForEntertainment;
+ (id)_specForNightOut;
+ (id)_specForSportEvent;
+ (id)_specForPerformance;
+ (id)_specForActivity;
+ (id)_specForWinterSport;
+ (id)_specForBeaching;
+ (id)_specForHiking;
+ (id)_specForClimbing;
+ (id)_specForDiving;
+ (id)_specForBreakfast;
+ (id)_specForLunch;
+ (id)_specForDinner;
+ (id)_specForGathering;
+ (id)_specForPet;
+ (id)_specForBaby;
+ (id)_specForBabyGrowingUp;
+ (id)_specForEarlyMomentsWithPersonNodes:(id)a0;
+ (id)_specForPeopleVisiting;
+ (id)_specForThrowbackThursday;
+ (id)_specForFoodieWithPersonNodes:(id)a0 locationName:(id)a1 tripTitleLocationType:(unsigned long long)a2 allowInspiredTastesTitle:(BOOL)a3 genericOnly:(BOOL)a4;
+ (id)_publicEventSpecEventName;
+ (id)_publicEventSpecPerformerNames;
+ (id)_publicEventSpecCategoryNameAtBusiness;
+ (id)_publicEventSpecCategoryNameInCity;

@end
