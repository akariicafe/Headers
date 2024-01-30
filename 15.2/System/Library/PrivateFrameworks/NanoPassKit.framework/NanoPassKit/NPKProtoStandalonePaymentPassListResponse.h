@class NPKProtoStandaloneResponseHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentPassListResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader;
@property (retain, nonatomic) NSMutableArray *paymentPasses;

+ (Class)paymentPassesType;

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
- (void)addPaymentPasses:(id)a0;
- (unsigned long long)paymentPassesCount;
- (void)clearPaymentPasses;
- (id)paymentPassesAtIndex:(unsigned long long)a0;

@end
