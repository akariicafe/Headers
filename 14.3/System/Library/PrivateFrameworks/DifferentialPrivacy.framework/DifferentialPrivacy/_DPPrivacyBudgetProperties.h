@class NSString, NSNumber;

@interface _DPPrivacyBudgetProperties : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *interval;
@property (retain, nonatomic) NSNumber *intervalBudgetValue;
@property (retain, nonatomic) NSNumber *refillInterval;
@property (retain, nonatomic) NSNumber *refillAmount;

+ (id)allBudgetPropertiesKeys;
+ (id)budgetPropertiesForKey:(id)a0;
+ (id)budgetMaintenanceSchedule;
+ (id)budgetPropertiesFromFile:(id)a0;
+ (id)budgetPropertiesFromDictionary:(id)a0;
+ (void)initializeAllBudgetProperties;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
