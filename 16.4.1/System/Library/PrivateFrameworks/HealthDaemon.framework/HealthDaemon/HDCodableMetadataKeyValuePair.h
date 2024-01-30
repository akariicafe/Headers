@class NSString, HDCodableQuantity, NSData;

@interface HDCodableMetadataKeyValuePair : PBCodable <NSCopying> {
    struct { unsigned char dateValue : 1; unsigned char numberDoubleValue : 1; unsigned char numberIntValue : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasDateValue;
@property (nonatomic) double dateValue;
@property (nonatomic) BOOL hasNumberIntValue;
@property (nonatomic) long long numberIntValue;
@property (nonatomic) BOOL hasNumberDoubleValue;
@property (nonatomic) double numberDoubleValue;
@property (readonly, nonatomic) BOOL hasQuantityValue;
@property (retain, nonatomic) HDCodableQuantity *quantityValue;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (retain, nonatomic) NSData *dataValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
