@class NSMutableArray;

@interface NPKProtoPaymentPreconditionsNotMetRequest : PBRequest <NSCopying>

@property (nonatomic) int failedPrecondition;
@property (retain, nonatomic) NSMutableArray *passIDs;

+ (Class)passIDsType;

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
- (void)addPassIDs:(id)a0;
- (unsigned long long)passIDsCount;
- (void)clearPassIDs;
- (id)passIDsAtIndex:(unsigned long long)a0;
- (id)failedPreconditionAsString:(int)a0;
- (int)StringAsFailedPrecondition:(id)a0;

@end
