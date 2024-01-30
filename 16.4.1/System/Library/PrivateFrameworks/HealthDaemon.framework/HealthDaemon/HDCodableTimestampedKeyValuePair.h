@class NSString, NSData;

@interface HDCodableTimestampedKeyValuePair : PBCodable <NSCopying> {
    struct { unsigned char numberDoubleValue : 1; unsigned char numberIntValue : 1; unsigned char timestamp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasNumberIntValue;
@property (nonatomic) long long numberIntValue;
@property (nonatomic) BOOL hasNumberDoubleValue;
@property (nonatomic) double numberDoubleValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;

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
- (void)setValue:(id)a0;
- (id)decodedTimestamp;
- (id)decodedValue;
- (id)initWithKey:(id)a0 value:(id)a1 timestamp:(id)a2;
- (void)setTimestampWithDate:(id)a0;

@end
