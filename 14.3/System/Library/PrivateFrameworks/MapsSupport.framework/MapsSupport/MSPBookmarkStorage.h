@class MSPRegionBookmark, NSString, MSPRouteBookmark, MSPPlaceBookmark, MSPTransitLineBookmark, PBUnknownFields;

@interface MSPBookmarkStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char position : 1; unsigned char timestamp : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) double position;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasPlaceBookmark;
@property (retain, nonatomic) MSPPlaceBookmark *placeBookmark;
@property (readonly, nonatomic) BOOL hasRouteBookmark;
@property (retain, nonatomic) MSPRouteBookmark *routeBookmark;
@property (readonly, nonatomic) BOOL hasRegionBookmark;
@property (retain, nonatomic) MSPRegionBookmark *regionBookmark;
@property (readonly, nonatomic) BOOL hasTransitLineBookmark;
@property (retain, nonatomic) MSPTransitLineBookmark *transitLineBookmark;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)typeAsString:(int)a0;

@end
