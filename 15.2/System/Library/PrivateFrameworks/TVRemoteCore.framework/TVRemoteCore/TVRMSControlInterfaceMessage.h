@interface TVRMSControlInterfaceMessage : PBCodable <NSCopying> {
    struct { unsigned char supportsDirectionalControl : 1; unsigned char supportsSpeakerSelection : 1; unsigned char supportsVolumeControl : 1; } _has;
}

@property (nonatomic) BOOL hasSupportsSpeakerSelection;
@property (nonatomic) BOOL supportsSpeakerSelection;
@property (nonatomic) BOOL hasSupportsVolumeControl;
@property (nonatomic) BOOL supportsVolumeControl;
@property (nonatomic) BOOL hasSupportsDirectionalControl;
@property (nonatomic) BOOL supportsDirectionalControl;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
