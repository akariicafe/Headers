@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDQuickLink : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_quickLinkItems;
    NSMutableArray *_secondaryQuickLinkItems;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_quickLinkItems : 1; unsigned char read_secondaryQuickLinkItems : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *quickLinkItems;
@property (retain, nonatomic) NSMutableArray *secondaryQuickLinkItems;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)quickLinkItemType;
+ (Class)secondaryQuickLinkItemType;
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
- (void)addQuickLinkItem:(id)a0;
- (void)addSecondaryQuickLinkItem:(id)a0;
- (unsigned long long)quickLinkItemsCount;
- (void)clearQuickLinkItems;
- (id)quickLinkItemAtIndex:(unsigned long long)a0;
- (unsigned long long)secondaryQuickLinkItemsCount;
- (void)clearSecondaryQuickLinkItems;
- (id)secondaryQuickLinkItemAtIndex:(unsigned long long)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
