@class NSString, NSMutableArray;

@interface PersonLinkingLinkedPairEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserID;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSMutableArray *pairs;

+ (Class)pairsType;

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
- (void)clearPairs;
- (unsigned long long)pairsCount;
- (void)addPairs:(id)a0;
- (id)pairsAtIndex:(unsigned long long)a0;

@end
