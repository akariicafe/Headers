@class NSString, _INPBDateTimeRange, _INPBInteger, _INPBPaymentMethod, _INPBDataString, _INPBLocation, _INPBIntentMetadata;

@interface _INPBRequestRideIntent : PBCodable <_INPBRequestRideIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char usesApplePayForPayment : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBLocation *dropOffLocation;
@property (readonly, nonatomic) BOOL hasDropOffLocation;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBInteger *partySize;
@property (readonly, nonatomic) BOOL hasPartySize;
@property (retain, nonatomic) _INPBPaymentMethod *paymentMethod;
@property (readonly, nonatomic) BOOL hasPaymentMethod;
@property (retain, nonatomic) _INPBDataString *paymentMethodName;
@property (readonly, nonatomic) BOOL hasPaymentMethodName;
@property (retain, nonatomic) _INPBLocation *pickupLocation;
@property (readonly, nonatomic) BOOL hasPickupLocation;
@property (retain, nonatomic) _INPBDateTimeRange *pickupTime;
@property (readonly, nonatomic) BOOL hasPickupTime;
@property (retain, nonatomic) _INPBDataString *rideOptionName;
@property (readonly, nonatomic) BOOL hasRideOptionName;
@property (retain, nonatomic) _INPBDateTimeRange *scheduledPickupTime;
@property (readonly, nonatomic) BOOL hasScheduledPickupTime;
@property (nonatomic) BOOL usesApplePayForPayment;
@property (nonatomic) BOOL hasUsesApplePayForPayment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
