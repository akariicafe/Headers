@class PBDataReader, GEOPDVenueLabel, PBUnknownFields;

@interface GEOPDVenueBuilding : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _directoryGroupingIds;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _levelIds;
    unsigned long long _buildingId;
    GEOPDVenueLabel *_label;
    unsigned long long _muid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_buildingId : 1; unsigned char has_muid : 1; unsigned char read_unknownFields : 1; unsigned char read_directoryGroupingIds : 1; unsigned char read_levelIds : 1; unsigned char read_label : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasBuildingId;
@property (nonatomic) unsigned long long buildingId;
@property (readonly, nonatomic) unsigned long long levelIdsCount;
@property (readonly, nonatomic) unsigned long long *levelIds;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) GEOPDVenueLabel *label;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) unsigned long long directoryGroupingIdsCount;
@property (readonly, nonatomic) unsigned long long *directoryGroupingIds;
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
- (void)addLevelId:(unsigned long long)a0;
- (void)addDirectoryGroupingId:(unsigned long long)a0;
- (void)clearLevelIds;
- (unsigned long long)levelIdAtIndex:(unsigned long long)a0;
- (void)clearDirectoryGroupingIds;
- (unsigned long long)directoryGroupingIdAtIndex:(unsigned long long)a0;
- (void)setLevelIds:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setDirectoryGroupingIds:(unsigned long long *)a0 count:(unsigned long long)a1;
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
