@class PKProtobufPayment, NSString;

@interface PKProtobufRemotePaymentResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPayment;
@property (retain, nonatomic) PKProtobufPayment *payment;
@property (readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;
@property (retain, nonatomic) NSString *remotePaymentRequestIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
