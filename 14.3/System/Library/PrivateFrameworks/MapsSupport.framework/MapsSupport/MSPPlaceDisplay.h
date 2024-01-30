@class NSString, GEOMapItemStorage, PBUnknownFields;

@interface MSPPlaceDisplay : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) BOOL hasPlaceMapItemStorage;
@property (retain, nonatomic) GEOMapItemStorage *placeMapItemStorage;
@property (readonly, nonatomic) BOOL hasSupersededSearchIdentifier;
@property (retain, nonatomic) NSString *supersededSearchIdentifier;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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

@end
