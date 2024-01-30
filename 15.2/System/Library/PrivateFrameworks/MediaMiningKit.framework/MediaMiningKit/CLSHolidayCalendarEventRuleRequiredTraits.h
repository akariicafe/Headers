@class NSDictionary;

@interface CLSHolidayCalendarEventRuleRequiredTraits : CLSHolidayCalendarEventRuleTraits

@property (nonatomic) BOOL mustContainMePerson;
@property (nonatomic) unsigned long long minimumPeopleCount;
@property (retain, nonatomic) NSDictionary *defaultScenesWithImportanceString;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long eventCategory;
@property (readonly, nonatomic) BOOL isCelebration;
@property (readonly, nonatomic) BOOL allowApproximateDateCalculation;

+ (unsigned long long)importanceEnumForImportanceString:(id)a0;
+ (id)_locationTraitDebugStringForTrait:(unsigned long long)a0;
+ (id)_peopleTraitDebugStringForTrait:(unsigned long long)a0;

- (BOOL)evaluateWithTraits:(id)a0 evaluateLocationTraits:(BOOL)a1;
- (id)initWithDescription:(id)a0;
- (id)description;
- (unsigned long long)importanceForScene:(id)a0;
- (void).cxx_destruct;
- (BOOL)peopleCountRangeIsRequired;

@end
