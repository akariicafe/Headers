@class PBDataReader, PBUnknownFields;

@interface GEOPDVenueIdentifier : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _containedBys;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _sectionIds;
    unsigned long long _buildingId;
    unsigned long long _featureId;
    unsigned long long _fixtureId;
    unsigned long long _geminiId;
    unsigned long long _levelId;
    unsigned long long _unitId;
    unsigned long long _venueGeminiId;
    unsigned long long _venueId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _levelOrdinal;
    struct { unsigned char has_buildingId : 1; unsigned char has_featureId : 1; unsigned char has_fixtureId : 1; unsigned char has_geminiId : 1; unsigned char has_levelId : 1; unsigned char has_unitId : 1; unsigned char has_venueGeminiId : 1; unsigned char has_venueId : 1; unsigned char has_levelOrdinal : 1; unsigned char read_unknownFields : 1; unsigned char read_containedBys : 1; unsigned char read_sectionIds : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasVenueId;
@property (nonatomic) unsigned long long venueId;
@property (nonatomic) BOOL hasBuildingId;
@property (nonatomic) unsigned long long buildingId;
@property (nonatomic) BOOL hasLevelId;
@property (nonatomic) unsigned long long levelId;
@property (readonly, nonatomic) unsigned long long sectionIdsCount;
@property (readonly, nonatomic) unsigned long long *sectionIds;
@property (nonatomic) BOOL hasUnitId;
@property (nonatomic) unsigned long long unitId;
@property (nonatomic) BOOL hasFixtureId;
@property (nonatomic) unsigned long long fixtureId;
@property (nonatomic) BOOL hasLevelOrdinal;
@property (nonatomic) int levelOrdinal;
@property (nonatomic) BOOL hasFeatureId;
@property (nonatomic) unsigned long long featureId;
@property (readonly, nonatomic) unsigned long long containedBysCount;
@property (readonly, nonatomic) unsigned long long *containedBys;
@property (nonatomic) BOOL hasGeminiId;
@property (nonatomic) unsigned long long geminiId;
@property (nonatomic) BOOL hasVenueGeminiId;
@property (nonatomic) unsigned long long venueGeminiId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addContainedBy:(unsigned long long)a0;
- (void)clearContainedBys;
- (unsigned long long)containedByAtIndex:(unsigned long long)a0;
- (void)setSectionIds:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setContainedBys:(unsigned long long *)a0 count:(unsigned long long)a1;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearSectionIds;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (unsigned long long)sectionIdAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithVenueID:(unsigned long long)a0 featureID:(unsigned long long)a1 businessID:(unsigned long long)a2;
- (void)addSectionId:(unsigned long long)a0;
- (id)initWithVenueID:(unsigned long long)a0 featureID:(unsigned long long)a1 businessID:(unsigned long long)a2 componentIdentifier:(id)a3;

@end
