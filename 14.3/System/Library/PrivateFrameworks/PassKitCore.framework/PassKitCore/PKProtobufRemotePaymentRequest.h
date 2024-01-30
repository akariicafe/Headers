@class PKProtobufPaymentRequest, NSString;

@interface PKProtobufRemotePaymentRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPaymentRequest;
@property (retain, nonatomic) PKProtobufPaymentRequest *paymentRequest;
@property (readonly, nonatomic) BOOL hasPaymentApplicationIdentifier;
@property (retain, nonatomic) NSString *paymentApplicationIdentifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;

- (Class)responseClass;
- (unsigned int)requestTypeCode;
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
