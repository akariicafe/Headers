@interface GEOLogMsgEventDirectionsRequestDetails : PBCodable <NSCopying> {
    int _destination;
    int _origin;
    int _purpose;
    BOOL _navStarted;
    struct { unsigned char has_destination : 1; unsigned char has_origin : 1; unsigned char has_purpose : 1; unsigned char has_navStarted : 1; } _flags;
}

@property (nonatomic) BOOL hasNavStarted;
@property (nonatomic) BOOL navStarted;
@property (nonatomic) BOOL hasPurpose;
@property (nonatomic) int purpose;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) int origin;
@property (nonatomic) BOOL hasDestination;
@property (nonatomic) int destination;

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
- (int)StringAsOrigin:(id)a0;
- (int)StringAsDestination:(id)a0;
- (int)StringAsPurpose:(id)a0;
- (id)originAsString:(int)a0;
- (id)destinationAsString:(int)a0;
- (id)purposeAsString:(int)a0;

@end
