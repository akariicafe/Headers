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

- (id)valueAtIndex:(unsigned long long)a0;
- (void)addValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)valuesCount;
- (void).cxx_destruct;
- (void)clearValues;

@end
