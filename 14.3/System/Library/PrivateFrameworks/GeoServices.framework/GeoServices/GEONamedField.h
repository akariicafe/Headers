@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEONamedField : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_name;
    NSMutableArray *_values;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_name : 1; unsigned char read_values : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *values;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)valuesType;
+ (BOOL)isValid:(id)a0;

- (void)clearValues;
- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)addValues:(id)a0;
- (id)valuesAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)valuesCount;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
