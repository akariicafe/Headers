@class PBDataReader;

@interface GEORPFeedbackULongListField : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _addeds;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _originals;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _removeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_addeds : 1; unsigned char read_originals : 1; unsigned char read_removeds : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long addedsCount;
@property (readonly, nonatomic) unsigned long long *addeds;
@property (readonly, nonatomic) unsigned long long removedsCount;
@property (readonly, nonatomic) unsigned long long *removeds;
@property (readonly, nonatomic) unsigned long long originalsCount;
@property (readonly, nonatomic) unsigned long long *originals;

+ (BOOL)isValid:(id)a0;

- (void)readAll:(BOOL)a0;
- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (void)addOriginal:(unsigned long long)a0;
- (void)clearOriginals;
- (unsigned long long)originalAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)setAddeds:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setRemoveds:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setOriginals:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)addAdded:(unsigned long long)a0;
- (id)init;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)addRemoved:(unsigned long long)a0;
- (unsigned long long)addedAtIndex:(unsigned long long)a0;
- (void)clearRemoveds;
- (unsigned long long)removedAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)clearAddeds;
- (id)dictionaryRepresentation;

@end
