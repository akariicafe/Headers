@interface CLSHolidayCalendarEventRuleRequiredTraits : CLSHolidayCalendarEventRuleTraits

@property (nonatomic) BOOL mustContainMePerson;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } peopleRange;
@property (nonatomic) BOOL allowSceneClassificationBasedEvaluation;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long category;
@property (readonly, nonatomic) BOOL isCelebration;

+ (id)_locationTraitDebugStringForTrait:(unsigned long long)a0;
+ (id)_peopleTraitDebugStringForTrait:(unsigned long long)a0;

- (BOOL)peopleCountRangeIsRequired;
- (id)initWithDescription:(id)a0;
- (BOOL)evaluateWithTraits:(id)a0;
- (id)description;

@end
