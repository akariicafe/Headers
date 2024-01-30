@class PBUnknownFields, PBDataReader;

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

- (id)initWithData:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithVenueID:(unsigned long long)a0 featureID:(unsigned long long)a1 businessID:(unsigned long long)a2;
- (id)initWithVenueID:(unsigned long long)a0 featureID:(unsigned long long)a1 businessID:(unsigned long long)a2 componentIdentifier:(id)a3;

@end
