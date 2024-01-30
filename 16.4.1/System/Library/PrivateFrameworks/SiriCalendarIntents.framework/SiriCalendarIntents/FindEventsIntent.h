@class DateComponentsRange, NSString, NSArray, CLPlacemark;

@interface FindEventsIntent : INIntent

@property (nonatomic, copy) NSString *searchQuery;
@property (nonatomic, retain) DateComponentsRange *dateTimeRange;
@property (nonatomic, copy) NSArray *participants;
@property (nonatomic, retain) CLPlacemark *location;
@property (nonatomic) long long requestedEventAttribute;
@property (nonatomic) long long positionalReference;
@property (nonatomic, copy) NSString *eventIdentifier;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
