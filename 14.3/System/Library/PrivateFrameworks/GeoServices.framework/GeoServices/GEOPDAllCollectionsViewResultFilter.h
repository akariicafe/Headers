@class GEOPDAllCollectionsViewResultFilterTypeKeyword, GEOPDAllCollectionsViewResultFilterTypeAddress, PBDataReader, PBUnknownFields;

@interface GEOPDAllCollectionsViewResultFilter : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAllCollectionsViewResultFilterTypeAddress *_filterAddress;
    GEOPDAllCollectionsViewResultFilterTypeKeyword *_filterKeyword;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _filterType;
    struct { unsigned char has_filterType : 1; unsigned char read_unknownFields : 1; unsigned char read_filterAddress : 1; unsigned char read_filterKeyword : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasFilterType;
@property (nonatomic) int filterType;
@property (readonly, nonatomic) BOOL hasFilterAddress;
@property (retain, nonatomic) GEOPDAllCollectionsViewResultFilterTypeAddress *filterAddress;
@property (readonly, nonatomic) BOOL hasFilterKeyword;
@property (retain, nonatomic) GEOPDAllCollectionsViewResultFilterTypeKeyword *filterKeyword;
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
- (id)filterTypeAsString:(int)a0;
- (int)StringAsFilterType:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
