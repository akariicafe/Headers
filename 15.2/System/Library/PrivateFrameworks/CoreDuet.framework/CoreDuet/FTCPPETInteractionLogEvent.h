@class NSMutableArray;

@interface FTCPPETInteractionLogEvent : PBCodable <NSCopying>

@property (nonatomic) unsigned long long hashedUserId;
@property (nonatomic) unsigned long long snapshotTimestamp;
@property (retain, nonatomic) NSMutableArray *interactions;

+ (Class)interactionsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)addInteractions:(id)a0;
- (unsigned long long)interactionsCount;
- (void)clearInteractions;
- (id)interactionsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
