@class GEOPDResultRefinementMetadataSort, GEOPDResultRefinementMetadataDefault, PBDataReader, PBUnknownFields;

@interface GEOPDResultRefinementMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDResultRefinementMetadataDefault *_metadataDefault;
    GEOPDResultRefinementMetadataSort *_metadataSort;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _metadataType;
    struct { unsigned char has_metadataType : 1; unsigned char read_unknownFields : 1; unsigned char read_metadataDefault : 1; unsigned char read_metadataSort : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasMetadataType;
@property (nonatomic) int metadataType;
@property (readonly, nonatomic) BOOL hasMetadataDefault;
@property (retain, nonatomic) GEOPDResultRefinementMetadataDefault *metadataDefault;
@property (readonly, nonatomic) BOOL hasMetadataSort;
@property (retain, nonatomic) GEOPDResultRefinementMetadataSort *metadataSort;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)metadataTypeAsString:(int)a0;
- (int)StringAsMetadataType:(id)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
