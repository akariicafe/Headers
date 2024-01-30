@interface CLSHolidayCalendarEventRuleTraits : NSObject

@property (nonatomic) BOOL containsMePerson;
@property (nonatomic) unsigned long long numberOfPeople;
@property (nonatomic) unsigned long long peopleTrait;
@property (nonatomic) unsigned long long locationTrait;

- (id)description;
- (id)init;

@end
