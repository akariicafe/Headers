@class NSString;

@interface GEOWiFiPasspointInfo : PBCodable <NSCopying> {
    NSString *_venueName;
    int _networkType;
    int _venueGroup;
    unsigned int _venueType;
    struct { unsigned char has_networkType : 1; unsigned char has_venueGroup : 1; unsigned char has_venueType : 1; } _flags;
}

@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) BOOL hasVenueGroup;
@property (nonatomic) int venueGroup;
@property (nonatomic) BOOL hasVenueType;
@property (nonatomic) unsigned int venueType;
@property (readonly, nonatomic) BOOL hasVenueName;
@property (retain, nonatomic) NSString *venueName;

+ (BOOL)isValid:(id)a0;

- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;
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
- (id)venueGroupAsString:(int)a0;
- (int)StringAsVenueGroup:(id)a0;

@end
