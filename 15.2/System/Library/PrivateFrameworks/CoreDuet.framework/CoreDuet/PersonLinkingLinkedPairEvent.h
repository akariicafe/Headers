@class NSString, NSMutableArray;

@interface PersonLinkingLinkedPairEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserID;
@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSMutableArray *pairs;

+ (Class)pairsType;

- (unsigned long long)pairsCount;
- (id)pairsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addPairs:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)clearPairs;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
