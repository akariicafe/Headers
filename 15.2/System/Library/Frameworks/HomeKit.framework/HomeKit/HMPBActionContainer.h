@class HMPBMediaPlaybackAction, HMPBNaturalLightingAction, HMPBCharacteristicWriteAction;

@interface HMPBActionContainer : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasCharacteristicWriteAction;
@property (retain, nonatomic) HMPBCharacteristicWriteAction *characteristicWriteAction;
@property (readonly, nonatomic) BOOL hasMediaPlaybackAction;
@property (retain, nonatomic) HMPBMediaPlaybackAction *mediaPlaybackAction;
@property (readonly, nonatomic) BOOL hasNaturalLightingAction;
@property (retain, nonatomic) HMPBNaturalLightingAction *naturalLightingAction;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
