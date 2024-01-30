@class NSString, C2MPError;

@interface C2MPGenericEventMetricValue : PBCodable <NSCopying> {
    struct { unsigned char dateValue : 1; unsigned char doubleValue : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasDateValue;
@property (nonatomic) unsigned long long dateValue;
@property (readonly, nonatomic) BOOL hasErrorValue;
@property (retain, nonatomic) C2MPError *errorValue;

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

@end
