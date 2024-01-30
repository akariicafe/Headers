@class NSString;

@interface PMParamKeyValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char intValue : 1; unsigned char floatValue : 1; unsigned char boolValue : 1; } _has;
}

@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasIntValue;
@property (nonatomic) long long intValue;
@property (nonatomic) BOOL hasFloatValue;
@property (nonatomic) float floatValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;

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
