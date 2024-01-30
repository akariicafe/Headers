@interface AWDHomeKitCharacteristicThresholdEvent : PBCodable <NSCopying> {
    struct { unsigned char maxPresent : 1; unsigned char minPresent : 1; } _has;
}

@property (nonatomic) BOOL hasMinPresent;
@property (nonatomic) BOOL minPresent;
@property (nonatomic) BOOL hasMaxPresent;
@property (nonatomic) BOOL maxPresent;

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
