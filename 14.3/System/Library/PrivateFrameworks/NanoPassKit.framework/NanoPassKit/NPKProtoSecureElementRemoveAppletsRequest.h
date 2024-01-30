@class NSMutableArray;

@interface NPKProtoSecureElementRemoveAppletsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *cardAIDs;

+ (Class)cardAIDsType;

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
- (void)addCardAIDs:(id)a0;
- (unsigned long long)cardAIDsCount;
- (void)clearCardAIDs;
- (id)cardAIDsAtIndex:(unsigned long long)a0;

@end
