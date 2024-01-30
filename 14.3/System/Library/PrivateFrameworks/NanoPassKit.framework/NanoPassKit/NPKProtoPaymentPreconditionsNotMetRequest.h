@class NSMutableArray;

@interface NPKProtoPaymentPreconditionsNotMetRequest : PBRequest <NSCopying>

@property (nonatomic) int failedPrecondition;
@property (retain, nonatomic) NSMutableArray *passIDs;

+ (Class)passIDsType;

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
- (void)addPassIDs:(id)a0;
- (unsigned long long)passIDsCount;
- (void)clearPassIDs;
- (id)passIDsAtIndex:(unsigned long long)a0;
- (id)failedPreconditionAsString:(int)a0;
- (int)StringAsFailedPrecondition:(id)a0;

@end
