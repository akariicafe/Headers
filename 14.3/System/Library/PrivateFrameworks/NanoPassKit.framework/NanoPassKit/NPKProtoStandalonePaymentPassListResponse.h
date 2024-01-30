@class NPKProtoStandaloneResponseHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentPassListResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader;
@property (retain, nonatomic) NSMutableArray *paymentPasses;

+ (Class)paymentPassesType;

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
- (void)addPaymentPasses:(id)a0;
- (unsigned long long)paymentPassesCount;
- (void)clearPaymentPasses;
- (id)paymentPassesAtIndex:(unsigned long long)a0;

@end
