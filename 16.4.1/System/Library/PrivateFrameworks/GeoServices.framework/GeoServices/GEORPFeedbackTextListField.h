@class NSMutableArray, PBDataReader;

@interface GEORPFeedbackTextListField : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_addeds;
    NSMutableArray *_originals;
    NSMutableArray *_removeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_addeds : 1; unsigned char read_originals : 1; unsigned char read_removeds : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *addeds;
@property (retain, nonatomic) NSMutableArray *removeds;
@property (retain, nonatomic) NSMutableArray *originals;

+ (BOOL)isValid:(id)a0;
+ (Class)addedType;
+ (Class)originalType;
+ (Class)removedType;

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
- (void).cxx_destruct;
- (id)removedAtIndex:(unsigned long long)a0;
- (void)addAdded:(id)a0;
- (void)addOriginal:(id)a0;
- (void)addRemoved:(id)a0;
- (id)addedAtIndex:(unsigned long long)a0;
- (unsigned long long)addedsCount;
- (void)clearAddeds;
- (void)clearOriginals;
- (void)clearRemoveds;
- (id)originalAtIndex:(unsigned long long)a0;
- (unsigned long long)originalsCount;
- (unsigned long long)removedsCount;

@end
