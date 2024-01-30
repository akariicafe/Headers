@class NSMutableArray;

@interface SYVectorClock : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *clocks;

+ (void)initialize;
+ (Class)clocksType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSONRepresentation:(id)a0;
- (unsigned long long)clocksCount;
- (void)incrementClockForPeerID:(id)a0;
- (BOOL)hasClockForPeer:(id)a0;
- (id)clockForPeer:(id)a0;
- (void)addClocks:(id)a0;
- (unsigned long long)clockValueForPeerID:(id)a0;
- (unsigned long long)clockValueForPeer:(id)a0;
- (void)setClockValue:(unsigned long long)a0 forPeer:(id)a1;
- (void)increaseClockForPeerID:(id)a0 by:(unsigned long long)a1;
- (BOOL)_setTheory_isEqual:(id)a0;
- (BOOL)hasClockForPeerID:(id)a0;
- (id)clockForPeerID:(id)a0;
- (void)setClockValue:(unsigned long long)a0 forPeerID:(id)a1;
- (id)compactDictionaryRepresentation;
- (void)increaseClockForPeer:(id)a0 by:(unsigned long long)a1;
- (void)incrementClockForPeer:(id)a0;
- (void)clearClocks;
- (id)clocksAtIndex:(unsigned long long)a0;

@end
