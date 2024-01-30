@class NSString;

@interface HDCodableMedicalDate : PBCodable <NSCopying> {
    struct { unsigned char form : 1; unsigned char underlyingDate : 1; } _has;
}

@property (nonatomic) BOOL hasForm;
@property (nonatomic) long long form;
@property (nonatomic) BOOL hasUnderlyingDate;
@property (nonatomic) double underlyingDate;
@property (readonly, nonatomic) BOOL hasOriginalTimeZoneString;
@property (retain, nonatomic) NSString *originalTimeZoneString;

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
