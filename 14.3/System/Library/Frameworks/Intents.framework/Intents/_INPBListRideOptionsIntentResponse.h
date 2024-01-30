@class NSArray, _INPBTimestamp, NSString;

@interface _INPBListRideOptionsIntentResponse : PBCodable <_INPBListRideOptionsIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char supportsApplePayForPayment : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBTimestamp *expirationDate;
@property (readonly, nonatomic) BOOL hasExpirationDate;
@property (copy, nonatomic) NSArray *paymentMethods;
@property (readonly, nonatomic) unsigned long long paymentMethodsCount;
@property (copy, nonatomic) NSArray *rideOptions;
@property (readonly, nonatomic) unsigned long long rideOptionsCount;
@property (nonatomic) BOOL supportsApplePayForPayment;
@property (nonatomic) BOOL hasSupportsApplePayForPayment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)rideOptionsType;
+ (Class)paymentMethodsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearRideOptions;
- (void)addRideOptions:(id)a0;
- (id)rideOptionsAtIndex:(unsigned long long)a0;
- (void)clearPaymentMethods;
- (void)addPaymentMethods:(id)a0;
- (id)paymentMethodsAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
