@class NSDictionary, NSArray;

@interface HDDemoDataFoodDatabase : NSObject

@property (copy, nonatomic) NSDictionary *dietaryNutrientDailyValues;
@property (copy, nonatomic) NSDictionary *canonicalDietaryUnits;
@property (copy, nonatomic) NSArray *beverages;
@property (copy, nonatomic) NSArray *breakfastFoods;
@property (copy, nonatomic) NSArray *lunchFoods;
@property (copy, nonatomic) NSArray *snackFoods;
@property (copy, nonatomic) NSArray *dinnerFoods;

- (id)init;
- (id)milk;
- (void).cxx_destruct;
- (id)apple;
- (id)coffee;
- (id)canonicalDietaryUnitForQuantityTypeIdentifier:(id)a0;
- (id)randomFoodForType:(long long)a0;
- (id)oceanSprayCranberryJuice;
- (id)tropicanaOrangeJuice;
- (id)odwallaCMonster;
- (id)quakerInstantOatmealRegularWithMilk;
- (id)quakerInstantOatmealAppleCinnamonWithMilk;
- (id)quakerInstantOatmealMapleWithMilk;
- (id)lifeCerealWithMilk;
- (id)totalCerealWithMilk;
- (id)jimmyDeanBreakfastCroissant;
- (id)traderJoesBreakfastBurrito;
- (id)mcDonaldsBigMac;
- (id)mcDonaldsMcDouble;
- (id)mcDonaldsMcChickenSandwich;
- (id)mcDonaldsCaesarSaladWithGrilledChicken;
- (id)mcDonaldsGreekSaladWithCrispyChicken;
- (id)traderJoesButterChickenWithBasmataRice;
- (id)traderJoesChickenAndGreenChileTomales;
- (id)subwayFootLongBlackForestHamSandwich;
- (id)subwayFootLongVeggieDelightSandwich;
- (id)subwayVeggieDelightSalad;
- (id)bumbleBarWithAlmond;
- (id)hersheyBarWithAlmonds;
- (id)clifBarChocoFudgeAndAlmond;
- (id)crackersGlutenFreeMultigrain;
- (id)crackersTriscuits;
- (id)keeblerAnimalCrackers;
- (id)oikosYogurt;
- (id)redLobsterTilapiaWithRoastedVegetables;
- (id)livemainLobsterWithCornAndPotatoes;
- (id)oliveGardenGarlicRosemaryChicken;
- (id)oliveGardenBakedTilapiaWithShrimp;
- (id)oliveGardenCitrusChickenSorrento;
- (id)oliveGardenHerbGrilledSalmon;
- (id)oliveGardenChickenScampi;
- (id)oliveGardenChickenAndShrimpCarbonara;
- (id)randomFoodObjectFromArray:(id)a0;
- (double)dailyValueForDietaryNutrientIdentifier:(id)a0;
- (id)oliveGardenRosemaryChicken;

@end
