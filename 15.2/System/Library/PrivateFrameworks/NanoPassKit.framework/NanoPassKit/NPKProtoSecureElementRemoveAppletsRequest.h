@class NSMutableArray;

@interface NPKProtoSecureElementRemoveAppletsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *cardAIDs;

+ (Class)cardAIDsType;

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
- (void)addCardAIDs:(id)a0;
- (unsigned long long)cardAIDsCount;
- (void)clearCardAIDs;
- (id)cardAIDsAtIndex:(unsigned long long)a0;

@end
