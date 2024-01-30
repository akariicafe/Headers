@class NSString, NSData;

@interface NPKProtoRemotePassActionEnterValueRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSString *requestUniqueID;
@property (retain, nonatomic) NSString *balanceIdentifier;
@property (retain, nonatomic) NSString *balanceLabel;
@property (retain, nonatomic) NSString *currentBalanceCurrency;
@property (nonatomic) long long currentBalanceAmount;
@property (readonly, nonatomic) BOOL hasPaymentPassActionData;
@property (retain, nonatomic) NSData *paymentPassActionData;

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
