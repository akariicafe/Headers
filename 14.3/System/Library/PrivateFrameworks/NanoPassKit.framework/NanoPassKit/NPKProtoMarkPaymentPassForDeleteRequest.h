@class NSString, NSMutableArray;

@interface NPKProtoMarkPaymentPassForDeleteRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSString *passID;
@property (retain, nonatomic) NSMutableArray *paymentApplicationAIDs;

+ (Class)paymentApplicationAIDsType;

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
- (void)addPaymentApplicationAIDs:(id)a0;
- (unsigned long long)paymentApplicationAIDsCount;
- (void)clearPaymentApplicationAIDs;
- (id)paymentApplicationAIDsAtIndex:(unsigned long long)a0;

@end
