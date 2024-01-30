@class NSString, NSDate, NSNumber, INImage;

@interface INGetAvailableRestaurantReservationBookingDefaultsIntentResponse : INIntentResponse <INImageProxyInjecting, INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport>

@property (readonly, nonatomic) unsigned long long defaultPartySize;
@property (readonly, copy, nonatomic) NSDate *defaultBookingDate;
@property (copy, nonatomic) NSNumber *maximumPartySize;
@property (copy, nonatomic) NSNumber *minimumPartySize;
@property (copy, nonatomic) INImage *providerImage;
@property (readonly, nonatomic) long long code;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDefaultPartySize:(unsigned long long)a0 defaultBookingDate:(id)a1 code:(long long)a2 userActivity:(id)a3;
- (void).cxx_destruct;
- (id)initWithBackingStore:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;

@end
