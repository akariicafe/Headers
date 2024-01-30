@class PBUnknownFields, PBDataReader, NSMutableArray, GEOPDTextItemDisplayConfig;

@interface GEOPDTextItemContainer : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDTextItemDisplayConfig *_displayConf;
    NSMutableArray *_textItems;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_displayConf : 1; unsigned char read_textItems : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *textItems;
@property (readonly, nonatomic) BOOL hasDisplayConf;
@property (retain, nonatomic) GEOPDTextItemDisplayConfig *displayConf;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)textItemType;
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
- (void)addTextItem:(id)a0;
- (id)description;
- (unsigned long long)textItemsCount;
- (void)clearTextItems;
- (id)textItemAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
