@class NSString, NSURL, SAUIAppPunchOut, NSNumber, SACalendar;

@interface SARestaurantOpening : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *bookingId;
@property (retain, nonatomic) SAUIAppPunchOut *makeReservationPunchOut;
@property (copy, nonatomic) NSNumber *partySize;
@property (retain, nonatomic) SACalendar *timeSlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)opening;
+ (id)openingWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
