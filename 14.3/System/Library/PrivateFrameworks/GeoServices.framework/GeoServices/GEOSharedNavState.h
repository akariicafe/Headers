@class GEOMapItemStorage, NSString, PBUnknownFields, GEOSharedNavRouteInfo, PBDataReader, GEOSharedNavETAInfo, GEOSharedNavSenderInfo;

@interface GEOSharedNavState : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapItemStorage *_destinationInfo;
    GEOSharedNavETAInfo *_etaInfo;
    NSString *_groupIdentifier;
    double _localUpdatedTimestamp;
    GEOSharedNavRouteInfo *_routeInfo;
    GEOSharedNavSenderInfo *_senderInfo;
    double _updatedTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _protocolVersion;
    int _referenceFrame;
    unsigned int _transportType;
    BOOL _arrived;
    BOOL _closed;
    BOOL _muted;
    struct { unsigned char has_localUpdatedTimestamp : 1; unsigned char has_updatedTimestamp : 1; unsigned char has_protocolVersion : 1; unsigned char has_referenceFrame : 1; unsigned char has_transportType : 1; unsigned char has_arrived : 1; unsigned char has_closed : 1; unsigned char has_muted : 1; unsigned char read_unknownFields : 1; unsigned char read_destinationInfo : 1; unsigned char read_etaInfo : 1; unsigned char read_groupIdentifier : 1; unsigned char read_routeInfo : 1; unsigned char read_senderInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasDestinationInfo;
@property (retain, nonatomic) GEOMapItemStorage *destinationInfo;
@property (readonly, nonatomic) BOOL hasEtaInfo;
@property (retain, nonatomic) GEOSharedNavETAInfo *etaInfo;
@property (readonly, nonatomic) BOOL hasRouteInfo;
@property (retain, nonatomic) GEOSharedNavRouteInfo *routeInfo;
@property (readonly, nonatomic) BOOL hasSenderInfo;
@property (retain, nonatomic) GEOSharedNavSenderInfo *senderInfo;
@property (readonly, nonatomic) BOOL hasGroupIdentifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (nonatomic) BOOL hasArrived;
@property (nonatomic) BOOL arrived;
@property (nonatomic) BOOL hasClosed;
@property (nonatomic) BOOL closed;
@property (nonatomic) BOOL hasReferenceFrame;
@property (nonatomic) int referenceFrame;
@property (nonatomic) BOOL hasMuted;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL hasUpdatedTimestamp;
@property (nonatomic) double updatedTimestamp;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) unsigned int transportType;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic) BOOL hasLocalUpdatedTimestamp;
@property (nonatomic) double localUpdatedTimestamp;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)clearSensitiveFields;
- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (int)StringAsReferenceFrame:(id)a0;
- (id)referenceFrameAsString:(int)a0;

@end
