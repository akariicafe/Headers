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

- (id)initWithData:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
