@class NSString, NSData;

@interface CKCDPErrorUserInfoValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char int64Value : 1; unsigned char boolValue : 1; } _has;
}

@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasInt64Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;

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
