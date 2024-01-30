@class NSString, NSMutableArray;

@interface NPKProtoHandleBalanceChangeRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPassID;
@property (retain, nonatomic) NSString *passID;
@property (retain, nonatomic) NSMutableArray *balanceBytes;

+ (Class)balanceBytesType;

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
- (void)addBalanceBytes:(id)a0;
- (unsigned long long)balanceBytesCount;
- (void)clearBalanceBytes;
- (id)balanceBytesAtIndex:(unsigned long long)a0;

@end
