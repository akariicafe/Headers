@class NSString;

@interface GEOLogMsgStateRealtimeTrafficProbe : PBCodable <NSCopying> {
    long long _recvTime;
    NSString *_tripId;
    int _probeCount;
    struct { unsigned char has_recvTime : 1; unsigned char has_probeCount : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTripId;
@property (retain, nonatomic) NSString *tripId;
@property (nonatomic) BOOL hasRecvTime;
@property (nonatomic) long long recvTime;
@property (nonatomic) BOOL hasProbeCount;
@property (nonatomic) int probeCount;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
