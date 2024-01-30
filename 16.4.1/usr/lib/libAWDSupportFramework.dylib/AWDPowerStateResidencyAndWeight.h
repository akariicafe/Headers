@interface AWDPowerStateResidencyAndWeight : PBCodable <NSCopying> {
    struct { unsigned char residency : 1; unsigned char weight : 1; } _has;
}

@property (nonatomic) BOOL hasResidency;
@property (nonatomic) unsigned int residency;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) unsigned int weight;

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
