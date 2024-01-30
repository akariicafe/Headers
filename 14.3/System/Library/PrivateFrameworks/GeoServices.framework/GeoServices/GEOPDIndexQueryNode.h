@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDIndexQueryNode : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_field;
    NSMutableArray *_operands;
    NSString *_value;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char read_unknownFields : 1; unsigned char read_field : 1; unsigned char read_operands : 1; unsigned char read_value : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasField;
@property (retain, nonatomic) NSString *field;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSMutableArray *operands;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)operandType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)addOperand:(id)a0;
- (id)typeAsString:(int)a0;
- (unsigned long long)operandsCount;
- (void)clearOperands;
- (id)operandAtIndex:(unsigned long long)a0;

@end
