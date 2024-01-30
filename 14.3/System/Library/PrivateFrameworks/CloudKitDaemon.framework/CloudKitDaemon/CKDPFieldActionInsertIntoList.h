@class CKDPListPosition, NSMutableArray;

@interface CKDPFieldActionInsertIntoList : PBCodable <NSCopying> {
    struct { unsigned char insertAfter : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPosition;
@property (retain, nonatomic) CKDPListPosition *position;
@property (nonatomic) BOOL hasInsertAfter;
@property (nonatomic) BOOL insertAfter;
@property (retain, nonatomic) NSMutableArray *values;

+ (Class)valueType;

- (void)clearValues;
- (void)addValue:(id)a0;
- (id)valueAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)valuesCount;

@end
