@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDPopularNearbyResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOPDLitePlaceResult { unsigned long long x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *_litePlaceResults;
    unsigned long long _litePlaceResultsCount;
    unsigned long long _litePlaceResultsSpace;
    NSString *_sectionHeader;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_litePlaceResults : 1; unsigned char read_sectionHeader : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasSectionHeader;
@property (retain, nonatomic) NSString *sectionHeader;
@property (readonly, nonatomic) unsigned long long litePlaceResultsCount;
@property (readonly, nonatomic) struct GEOPDLitePlaceResult { unsigned long long x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *litePlaceResults;
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
- (void)clearLitePlaceResults;
- (void)addLitePlaceResult:(struct GEOPDLitePlaceResult { unsigned long long x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })a0;
- (struct GEOPDLitePlaceResult { unsigned long long x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; })litePlaceResultAtIndex:(unsigned long long)a0;
- (void)setLitePlaceResults:(struct GEOPDLitePlaceResult { unsigned long long x0; int x1; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x2; } *)a0 count:(unsigned long long)a1;

@end
