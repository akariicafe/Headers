@class DateComponentsRange, NSString, CLPlacemark, INPerson;

@interface CreateEventIntent : INIntent

@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) DateComponentsRange *dateTimeRange;
@property (nonatomic, retain) INPerson *participants;
@property (nonatomic, retain) CLPlacemark *location;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
