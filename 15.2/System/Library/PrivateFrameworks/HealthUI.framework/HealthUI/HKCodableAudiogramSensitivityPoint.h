@class HKCodableQuantity;

@interface HKCodableAudiogramSensitivityPoint : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFrequency;
@property (retain, nonatomic) HKCodableQuantity *frequency;
@property (readonly, nonatomic) BOOL hasLeftEarSensitivity;
@property (retain, nonatomic) HKCodableQuantity *leftEarSensitivity;
@property (readonly, nonatomic) BOOL hasRightEarSensitivity;
@property (retain, nonatomic) HKCodableQuantity *rightEarSensitivity;

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
