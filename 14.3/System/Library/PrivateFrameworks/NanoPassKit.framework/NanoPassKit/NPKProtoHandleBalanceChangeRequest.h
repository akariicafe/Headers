@class NSString, NSMutableArray;

@interface NPKProtoHandleBalanceChangeRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPassID;
@property (retain, nonatomic) NSString *passID;
@property (retain, nonatomic) NSMutableArray *balanceBytes;

+ (Class)balanceBytesType;

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
- (void)addBalanceBytes:(id)a0;
- (unsigned long long)balanceBytesCount;
- (void)clearBalanceBytes;
- (id)balanceBytesAtIndex:(unsigned long long)a0;

@end
