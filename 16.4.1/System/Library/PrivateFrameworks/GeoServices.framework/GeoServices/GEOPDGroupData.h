@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDGroupData : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_buttonItems;
    NSString *_symbolImageName;
    NSMutableArray *_titles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_buttonItems : 1; unsigned char read_symbolImageName : 1; unsigned char read_titles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *titles;
@property (readonly, nonatomic) BOOL hasSymbolImageName;
@property (retain, nonatomic) NSString *symbolImageName;
@property (retain, nonatomic) NSMutableArray *buttonItems;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)titleType;
+ (Class)buttonItemType;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (void)addButtonItem:(id)a0;
- (void)addTitle:(id)a0;
- (id)buttonItemAtIndex:(unsigned long long)a0;
- (unsigned long long)buttonItemsCount;
- (void)clearButtonItems;
- (void)clearTitles;
- (id)titleAtIndex:(unsigned long long)a0;
- (unsigned long long)titlesCount;

@end
