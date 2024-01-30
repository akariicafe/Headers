@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEORPAccessPointCorrections : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_addeds;
    NSMutableArray *_editeds;
    NSMutableArray *_removeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_addeds : 1; unsigned char read_editeds : 1; unsigned char read_removeds : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *addeds;
@property (retain, nonatomic) NSMutableArray *removeds;
@property (retain, nonatomic) NSMutableArray *editeds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)editedType;
+ (Class)removedType;
+ (Class)addedType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (void)addEdited:(id)a0;
- (void)addRemoved:(id)a0;
- (unsigned long long)addedsCount;
- (void)clearAddeds;
- (id)addedAtIndex:(unsigned long long)a0;
- (unsigned long long)removedsCount;
- (void)clearRemoveds;
- (id)removedAtIndex:(unsigned long long)a0;
- (unsigned long long)editedsCount;
- (void)clearEditeds;
- (id)editedAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addAdded:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
