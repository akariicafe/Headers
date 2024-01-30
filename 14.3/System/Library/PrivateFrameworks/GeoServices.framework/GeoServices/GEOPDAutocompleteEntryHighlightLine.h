@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDAutocompleteEntryHighlightLine : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_line;
    NSMutableArray *_spans;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_line : 1; unsigned char read_spans : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasLine;
@property (retain, nonatomic) NSString *line;
@property (retain, nonatomic) NSMutableArray *spans;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)spanType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)spansCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)spanAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addSpan:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)clearSpans;

@end
