@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDSearchZeroKeywordCategorySuggestionResult : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_categorys;
    NSMutableArray *_zeroKeywordEntrys;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_categorys : 1; unsigned char read_zeroKeywordEntrys : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *categorys;
@property (retain, nonatomic) NSMutableArray *zeroKeywordEntrys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)zeroKeywordEntryType;
+ (Class)categoryType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (void)addZeroKeywordEntry:(id)a0;
- (unsigned long long)zeroKeywordEntrysCount;
- (void)clearZeroKeywordEntrys;
- (id)zeroKeywordEntryAtIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addCategory:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (unsigned long long)categorysCount;
- (id)categoryAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)clearCategorys;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
