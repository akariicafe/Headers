@class DateComponentsRange, NSString, NSArray, CLPlacemark, CalendarEvent, INPerson, NSNumber;

@interface UpdateEventIntent : INIntent

@property (nonatomic, retain) CalendarEvent *targetEvent;
@property (nonatomic, copy) NSString *setTitle;
@property (nonatomic, retain) DateComponentsRange *setDateTimeRange;
@property (nonatomic, retain) CLPlacemark *setLocation;
@property (nonatomic, copy) NSArray *addParticipants;
@property (nonatomic, retain) INPerson *removeParticipants;
@property (nonatomic, retain) NSNumber *updateAllOccurrences;
@property (nonatomic, retain) NSNumber *removeLocation;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
