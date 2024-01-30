@class NSString, NSData;

@interface AWDHomeKitValue : PBCodable <NSCopying> {
    struct { unsigned char doubleVal : 1; unsigned char intVal : 1; unsigned char floatVal : 1; unsigned char boolVal : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasStringVal;
@property (retain, nonatomic) NSString *stringVal;
@property (nonatomic) BOOL hasIntVal;
@property (nonatomic) long long intVal;
@property (nonatomic) BOOL hasFloatVal;
@property (nonatomic) float floatVal;
@property (nonatomic) BOOL hasDoubleVal;
@property (nonatomic) double doubleVal;
@property (nonatomic) BOOL hasBoolVal;
@property (nonatomic) BOOL boolVal;
@property (readonly, nonatomic) BOOL hasDataVal;
@property (retain, nonatomic) NSData *dataVal;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
