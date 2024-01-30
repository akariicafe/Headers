@interface VCMediaNegotiationFaceTimeSettings : PBCodable <NSCopying> {
    struct { unsigned char capabilities : 1; unsigned char linkProbingCapabilityVersion : 1; unsigned char mediaControlInfoSubVersion : 1; unsigned char switches : 1; unsigned char oneToOneModeSupported : 1; } _has;
}

@property (nonatomic) BOOL hasCapabilities;
@property (nonatomic) unsigned int capabilities;
@property (nonatomic) BOOL hasSwitches;
@property (nonatomic) unsigned int switches;
@property (nonatomic) BOOL hasOneToOneModeSupported;
@property (nonatomic) BOOL oneToOneModeSupported;
@property (nonatomic) BOOL hasMediaControlInfoSubVersion;
@property (nonatomic) unsigned int mediaControlInfoSubVersion;
@property (nonatomic) BOOL hasLinkProbingCapabilityVersion;
@property (nonatomic) unsigned int linkProbingCapabilityVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)SIPDisabled;
- (unsigned char)mediaControlInfoFECFeedbackVersion;
- (BOOL)secureMessagingRequired;

@end
