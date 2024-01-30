@class NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventListInteractionSession : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_listResultItems;
    NSString *_searchString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _listType;
    struct { unsigned char has_listType : 1; unsigned char read_listResultItems : 1; unsigned char read_searchString : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasListType;
@property (nonatomic) int listType;
@property (retain, nonatomic) NSMutableArray *listResultItems;
@property (readonly, nonatomic) BOOL hasSearchString;
@property (retain, nonatomic) NSString *searchString;

+ (Class)listResultItemType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)addListResultItem:(id)a0;
- (unsigned long long)listResultItemsCount;
- (void)clearListResultItems;
- (id)listResultItemAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)listTypeAsString:(int)a0;
- (int)StringAsListType:(id)a0;

@end
