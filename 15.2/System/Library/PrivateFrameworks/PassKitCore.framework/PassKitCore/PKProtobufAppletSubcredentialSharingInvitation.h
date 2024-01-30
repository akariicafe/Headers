@class NSData, NSString;

@interface PKProtobufAppletSubcredentialSharingInvitation : PBCodable <NSCopying> {
    struct { unsigned char deviceType : 1; unsigned char entitlement : 1; unsigned char supportedRadioTechnologies : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasInvitation;
@property (retain, nonatomic) NSData *invitation;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasPartnerIdentifier;
@property (retain, nonatomic) NSString *partnerIdentifier;
@property (readonly, nonatomic) BOOL hasPairedReaderIdentifier;
@property (retain, nonatomic) NSString *pairedReaderIdentifier;
@property (readonly, nonatomic) BOOL hasRecipientName;
@property (retain, nonatomic) NSString *recipientName;
@property (readonly, nonatomic) BOOL hasSharingSessionIdentifier;
@property (retain, nonatomic) NSData *sharingSessionIdentifier;
@property (nonatomic) BOOL hasEntitlement;
@property (nonatomic) unsigned int entitlement;
@property (nonatomic) BOOL hasDeviceType;
@property (nonatomic) int deviceType;
@property (readonly, nonatomic) BOOL hasIssuer;
@property (retain, nonatomic) NSString *issuer;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (nonatomic) BOOL hasSupportedRadioTechnologies;
@property (nonatomic) unsigned int supportedRadioTechnologies;

- (int)StringAsDeviceType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)deviceTypeAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
