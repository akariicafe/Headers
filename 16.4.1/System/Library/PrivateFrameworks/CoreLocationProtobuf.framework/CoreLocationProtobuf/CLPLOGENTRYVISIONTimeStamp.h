@interface CLPLOGENTRYVISIONTimeStamp : PBCodable <NSCopying> {
    struct { unsigned char cfAbsoluteTimeS : 1; unsigned char machAbsoluteTimeS : 1; unsigned char machContinuousTimeS : 1; } _has;
}

@property (nonatomic) BOOL hasCfAbsoluteTimeS;
@property (nonatomic) double cfAbsoluteTimeS;
@property (nonatomic) BOOL hasMachAbsoluteTimeS;
@property (nonatomic) double machAbsoluteTimeS;
@property (nonatomic) BOOL hasMachContinuousTimeS;
@property (nonatomic) double machContinuousTimeS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
