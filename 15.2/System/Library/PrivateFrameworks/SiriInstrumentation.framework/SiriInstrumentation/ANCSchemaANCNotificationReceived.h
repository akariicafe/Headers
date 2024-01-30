@class ANCSchemaANCAudioDevice, NSData, SISchemaUUID;

@interface ANCSchemaANCNotificationReceived : SISchemaInstrumentationMessage {
    struct { unsigned char announcementCategory : 1; unsigned char targetPlatform : 1; unsigned char isTimeSensitiveAnnouncement : 1; unsigned char appCategory : 1; } _has;
}

@property (nonatomic) int announcementCategory;
@property (nonatomic) BOOL hasAnnouncementCategory;
@property (nonatomic) int targetPlatform;
@property (nonatomic) BOOL hasTargetPlatform;
@property (retain, nonatomic) ANCSchemaANCAudioDevice *connectedAudioDevice;
@property (nonatomic) BOOL hasConnectedAudioDevice;
@property (nonatomic) BOOL isTimeSensitiveAnnouncement;
@property (nonatomic) BOOL hasIsTimeSensitiveAnnouncement;
@property (nonatomic) int appCategory;
@property (nonatomic) BOOL hasAppCategory;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
