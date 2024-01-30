@class ACProtobufURL, NSString, ACProtobufVariableValueList, NSData, ACProtobufDate, ACProtobufVariableValueDictionary, ACProtobufUUID;

@interface ACProtobufVariableValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char integerValue : 1; unsigned char unsignedIntegerValue : 1; } _has;
}

@property (retain, nonatomic) id object;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasIntegerValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) BOOL hasUnsignedIntegerValue;
@property (nonatomic) unsigned long long unsignedIntegerValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL hasUuidValue;
@property (retain, nonatomic) ACProtobufUUID *uuidValue;
@property (readonly, nonatomic) BOOL hasDateValue;
@property (retain, nonatomic) ACProtobufDate *dateValue;
@property (readonly, nonatomic) BOOL hasUrlValue;
@property (retain, nonatomic) ACProtobufURL *urlValue;
@property (readonly, nonatomic) BOOL hasArrayValue;
@property (retain, nonatomic) ACProtobufVariableValueList *arrayValue;
@property (readonly, nonatomic) BOOL hasSetValue;
@property (retain, nonatomic) ACProtobufVariableValueList *setValue;
@property (readonly, nonatomic) BOOL hasDictionaryValue;
@property (retain, nonatomic) ACProtobufVariableValueDictionary *dictionaryValue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)_setObject:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithObjectValue:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
