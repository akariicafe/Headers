@class PKProtobufPaymentMethod, NSString, NSData, PKProtobufShippingMethod;

@interface PKProtobufPaymentHostUpdate : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;
@property (retain, nonatomic) NSString *remotePaymentRequestIdentifier;
@property (readonly, nonatomic) BOOL hasShippingContact;
@property (retain, nonatomic) NSData *shippingContact;
@property (readonly, nonatomic) BOOL hasShippingMethod;
@property (retain, nonatomic) PKProtobufShippingMethod *shippingMethod;
@property (readonly, nonatomic) BOOL hasPaymentMethod;
@property (retain, nonatomic) PKProtobufPaymentMethod *paymentMethod;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
