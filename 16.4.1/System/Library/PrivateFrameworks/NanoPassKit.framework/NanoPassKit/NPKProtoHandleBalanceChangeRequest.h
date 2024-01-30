@class NSString, NSMutableArray;

@interface NPKProtoHandleBalanceChangeRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPassID;
@property (retain, nonatomic) NSString *passID;
@property (retain, nonatomic) NSMutableArray *balanceBytes;

+ (Class)balanceBytesType;

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
- (void)addBalanceBytes:(id)a0;
- (id)balanceBytesAtIndex:(unsigned long long)a0;
- (unsigned long long)balanceBytesCount;
- (void)clearBalanceBytes;

@end
