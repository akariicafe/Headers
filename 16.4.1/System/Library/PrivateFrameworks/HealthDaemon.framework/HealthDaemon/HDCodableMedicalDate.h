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
