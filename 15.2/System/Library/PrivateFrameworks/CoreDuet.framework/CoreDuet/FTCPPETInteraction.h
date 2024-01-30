@class NSString, NSMutableArray;

@interface FTCPPETInteraction : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *participants;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSString *mechanism;
@property (nonatomic) BOOL isInbound;
@property (retain, nonatomic) NSString *duration;

+ (Class)participantsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addParticipants:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)participantsCount;
- (void)clearParticipants;
- (id)participantsAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
