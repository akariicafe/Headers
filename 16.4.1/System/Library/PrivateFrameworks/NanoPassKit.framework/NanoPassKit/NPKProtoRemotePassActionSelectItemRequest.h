@class NSString, NSData;

@interface NPKProtoRemotePassActionSelectItemRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSString *requestUniqueID;
@property (readonly, nonatomic) BOOL hasPlanIdentifier;
@property (retain, nonatomic) NSString *planIdentifier;
@property (readonly, nonatomic) BOOL hasPlanLabel;
@property (retain, nonatomic) NSString *planLabel;
@property (readonly, nonatomic) BOOL hasPlanDetailLabel;
@property (retain, nonatomic) NSString *planDetailLabel;
@property (readonly, nonatomic) BOOL hasStartDateData;
@property (retain, nonatomic) NSData *startDateData;
@property (readonly, nonatomic) BOOL hasExpiryDateData;
@property (retain, nonatomic) NSData *expiryDateData;
@property (readonly, nonatomic) BOOL hasPaymentPassActionData;
@property (retain, nonatomic) NSData *paymentPassActionData;
@property (readonly, nonatomic) BOOL hasDeviceIdentifier;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) BOOL hasPassTypeIdentifier;
@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (readonly, nonatomic) BOOL hasPassSerialNumber;
@property (retain, nonatomic) NSString *passSerialNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
