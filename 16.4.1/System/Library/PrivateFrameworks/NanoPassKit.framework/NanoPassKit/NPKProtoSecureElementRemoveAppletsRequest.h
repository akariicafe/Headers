@class NSMutableArray;

@interface NPKProtoSecureElementRemoveAppletsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *cardAIDs;

+ (Class)cardAIDsType;

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
- (void)addCardAIDs:(id)a0;
- (id)cardAIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)cardAIDsCount;
- (void)clearCardAIDs;

@end
