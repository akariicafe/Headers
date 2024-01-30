@class NSArray, NSString;

@interface INGetUserCurrentRestaurantReservationBookingsIntentResponse : INIntentResponse <INImageProxyInjecting, INGetUserCurrentRestaurantReservationBookingsIntentResponseExport>

@property (readonly, nonatomic) long long code;
@property (copy, nonatomic) NSArray *userCurrentBookings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)initWithUserCurrentBookings:(id)a0 code:(long long)a1 userActivity:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBackingStore:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;

@end
