@class NSDateComponents, CLPlacemark;

@interface ShowClockIntent : INIntent

@property (nonatomic, copy) NSDateComponents *offset;
@property (nonatomic, retain) CLPlacemark *location;
@property (nonatomic) long long clockRequestType;
@property (nonatomic) long long dayOfWeek;
@property (nonatomic, copy) NSDateComponents *referenceDate;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
