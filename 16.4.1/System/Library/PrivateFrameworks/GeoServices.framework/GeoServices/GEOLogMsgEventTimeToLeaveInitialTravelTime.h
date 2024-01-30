@interface GEOLogMsgEventTimeToLeaveInitialTravelTime : PBCodable <NSCopying> {
    int _travelTime;
    struct { unsigned char has_travelTime : 1; } _flags;
}

@property (nonatomic) BOOL hasTravelTime;
@property (nonatomic) int travelTime;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsTravelTime:(id)a0;
- (id)travelTimeAsString:(int)a0;

@end
