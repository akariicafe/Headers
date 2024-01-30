@class PBUnknownFields;

@interface GEOWaypointNameProperties : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _hasDisplayAddress;
    BOOL _hasDisplayName;
    BOOL _hasSpokenAddress;
    BOOL _hasSpokenName;
    struct { unsigned char has_hasDisplayAddress : 1; unsigned char has_hasDisplayName : 1; unsigned char has_hasSpokenAddress : 1; unsigned char has_hasSpokenName : 1; } _flags;
}

@property (nonatomic) BOOL hasHasDisplayName;
@property (nonatomic) BOOL hasDisplayName;
@property (nonatomic) BOOL hasHasSpokenName;
@property (nonatomic) BOOL hasSpokenName;
@property (nonatomic) BOOL hasHasDisplayAddress;
@property (nonatomic) BOOL hasDisplayAddress;
@property (nonatomic) BOOL hasHasSpokenAddress;
@property (nonatomic) BOOL hasSpokenAddress;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;

@end
