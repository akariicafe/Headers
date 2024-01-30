@class PBDataReader, GEOPDVenueLabel, PBUnknownFields;

@interface GEOPDVenueContainer : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _buildingIds;
    GEOPDVenueLabel *_label;
    unsigned long long _muid;
    unsigned long long _venueId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _browseType;
    struct { unsigned char has_muid : 1; unsigned char has_venueId : 1; unsigned char has_browseType : 1; unsigned char read_unknownFields : 1; unsigned char read_buildingIds : 1; unsigned char read_label : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasVenueId;
@property (nonatomic) unsigned long long venueId;
@property (readonly, nonatomic) unsigned long long buildingIdsCount;
@property (readonly, nonatomic) unsigned long long *buildingIds;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) GEOPDVenueLabel *label;
@property (nonatomic) BOOL hasBrowseType;
@property (nonatomic) int browseType;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (void)addBuildingId:(unsigned long long)a0;
- (void)clearBuildingIds;
- (unsigned long long)buildingIdAtIndex:(unsigned long long)a0;
- (void)setBuildingIds:(unsigned long long *)a0 count:(unsigned long long)a1;
- (id)browseTypeAsString:(int)a0;
- (int)StringAsBrowseType:(id)a0;
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

@end
