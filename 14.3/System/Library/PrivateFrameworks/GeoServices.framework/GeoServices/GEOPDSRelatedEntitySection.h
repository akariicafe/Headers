@class PBDataReader, NSString, GEOPDSRelatedCollectionSection, PBUnknownFields;

@interface GEOPDSRelatedEntitySection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_name;
    GEOPDSRelatedCollectionSection *_relatedCollectionSection;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _index;
    int _sectionType;
    struct { unsigned char has_index : 1; unsigned char has_sectionType : 1; unsigned char read_unknownFields : 1; unsigned char read_name : 1; unsigned char read_relatedCollectionSection : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL hasSectionType;
@property (nonatomic) int sectionType;
@property (readonly, nonatomic) BOOL hasRelatedCollectionSection;
@property (retain, nonatomic) GEOPDSRelatedCollectionSection *relatedCollectionSection;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

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
- (id)sectionTypeAsString:(int)a0;
- (int)StringAsSectionType:(id)a0;

@end
