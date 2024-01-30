@class NSString, NSArray, INRestaurant, NSDate;

@interface INRestaurantReservationBooking : NSObject <INRestaurantReservationBookingExport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) INRestaurant *restaurant;
@property (copy, nonatomic) NSString *bookingDescription;
@property (copy, nonatomic) NSDate *bookingDate;
@property (nonatomic) unsigned long long partySize;
@property (copy, nonatomic) NSString *bookingIdentifier;
@property (nonatomic, getter=isBookingAvailable) BOOL bookingAvailable;
@property (copy, nonatomic) NSArray *offers;
@property (nonatomic) BOOL requiresManualRequest;
@property (nonatomic) BOOL requiresEmailAddress;
@property (nonatomic) BOOL requiresName;
@property (nonatomic) BOOL requiresPhoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRestaurant:(id)a0 bookingDate:(id)a1 partySize:(unsigned long long)a2 bookingIdentifier:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
