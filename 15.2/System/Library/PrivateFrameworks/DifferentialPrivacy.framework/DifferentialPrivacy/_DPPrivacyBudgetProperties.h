@class NSString, NSNumber;

@interface _DPPrivacyBudgetProperties : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *interval;
@property (retain, nonatomic) NSNumber *intervalBudgetValue;
@property (retain, nonatomic) NSNumber *intervalChunksValue;
@property (retain, nonatomic) NSNumber *refillInterval;
@property (retain, nonatomic) NSNumber *refillAmount;

+ (void)initializeAllBudgetProperties;
+ (id)allBudgetPropertiesKeys;
+ (id)budgetPropertiesFromFile:(id)a0;
+ (id)budgetMaintenanceSchedule;
+ (id)budgetPropertiesFromDictionary:(id)a0;
+ (id)budgetPropertiesForKey:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
