@class NSString, NSMutableDictionary, NSArray, NSDictionary;

@interface CSDonatedEvent : NSObject <NSCopying>

@property (retain) NSMutableDictionary *mutableAttributes;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSArray *docIDs;
@property (copy, nonatomic) NSDictionary *additionalInfo;
@property (nonatomic) BOOL fromAllowListedSender;
@property (readonly) NSDictionary *attributes;

+ (id)eventFromData:(id)a0;

- (id)initWithData:(id)a0;
- (id)initWithAttributes:(id)a0;
- (id)initWithType:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (id)description;
- (void).cxx_destruct;
- (id)merchantName;
- (void)setMerchantName:(id)a0;
- (id)flightNumber;
- (void)setFlightNumber:(id)a0;
- (id)arrivalTerminal;
- (BOOL)senderIsCourier;
- (id)arrivalDateTime;
- (void)setCourierName:(id)a0;
- (void)setTrackingUrl:(id)a0;
- (id)arrivalAirportCode;
- (id)arrivalAirportName;
- (id)bookingInfoUrl;
- (id)checkInUrl;
- (id)confirmationNumber;
- (id)courierName;
- (id)deliveryDateTime;
- (id)departureAirportCode;
- (id)departureAirportName;
- (id)departureDateTime;
- (id)departureTerminal;
- (id)flightCarrier;
- (id)flightStatus;
- (id)orderDateTime;
- (void)setArrivalAirportCode:(id)a0;
- (void)setArrivalAirportName:(id)a0;
- (void)setArrivalDateTime:(id)a0;
- (void)setArrivalTerminal:(id)a0;
- (void)setBookingInfoUrl:(id)a0;
- (void)setCheckInUrl:(id)a0;
- (void)setConfirmationNumber:(id)a0;
- (void)setDeliveryDateTime:(id)a0;
- (void)setDepartureAirportCode:(id)a0;
- (void)setDepartureAirportName:(id)a0;
- (void)setDepartureDateTime:(id)a0;
- (void)setDepartureTerminal:(id)a0;
- (void)setFlightCarrier:(id)a0;
- (void)setFlightStatus:(id)a0;
- (void)setOrderDateTime:(id)a0;
- (void)setSenderIsCourier:(BOOL)a0;
- (void)setTrackingNumber:(id)a0;
- (id)trackingNumber;
- (id)trackingUrl;

@end
