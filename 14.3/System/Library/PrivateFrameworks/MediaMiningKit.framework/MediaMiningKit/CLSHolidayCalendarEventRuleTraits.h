@class NSSet;

@interface CLSHolidayCalendarEventRuleTraits : NSObject

@property (nonatomic) BOOL containsMePerson;
@property (nonatomic) unsigned long long numberOfPeople;
@property (nonatomic) unsigned long long peopleTrait;
@property (nonatomic) unsigned long long locationTrait;
@property (retain, nonatomic) NSSet *categories;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
