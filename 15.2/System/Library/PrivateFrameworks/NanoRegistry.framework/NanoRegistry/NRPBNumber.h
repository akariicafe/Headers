@interface NRPBNumber : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char int64Value : 1; unsigned char floatValue : 1; unsigned char int32Value : 1; unsigned char boolValue : 1; unsigned char isShortOrChar : 1; unsigned char isUnsigned : 1; } _has;
}

@property (nonatomic) BOOL hasInt32Value;
@property (nonatomic) int int32Value;
@property (nonatomic) BOOL hasFloatValue;
@property (nonatomic) float floatValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (nonatomic) BOOL hasInt64Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) BOOL hasIsUnsigned;
@property (nonatomic) BOOL isUnsigned;
@property (nonatomic) BOOL hasIsShortOrChar;
@property (nonatomic) BOOL isShortOrChar;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
