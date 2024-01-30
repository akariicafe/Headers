@class PBDataReader, GEOPDSInferredValue, NSMutableArray, PBUnknownFields;

@interface GEOPDSInferredInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDSInferredValue *_inferredValue;
    NSMutableArray *_operands;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _inferredType;
    int _operator;
    struct { unsigned char has_inferredType : 1; unsigned char has_operator : 1; unsigned char read_unknownFields : 1; unsigned char read_inferredValue : 1; unsigned char read_operands : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasInferredType;
@property (nonatomic) int inferredType;
@property (readonly, nonatomic) BOOL hasInferredValue;
@property (retain, nonatomic) GEOPDSInferredValue *inferredValue;
@property (nonatomic) BOOL hasOperator;
@property (nonatomic) int operator;
@property (retain, nonatomic) NSMutableArray *operands;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)operandType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)inferredTypeAsString:(int)a0;
- (int)StringAsInferredType:(id)a0;
- (id)operatorAsString:(int)a0;
- (int)StringAsOperator:(id)a0;
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
- (unsigned long long)operandsCount;
- (void)clearOperands;
- (id)operandAtIndex:(unsigned long long)a0;

@end
