@class NSData;

@interface SISchemaAnnounceCarPlayGlyphSettingToggled : SISchemaInstrumentationMessage {
    struct { unsigned char announcementsMuted : 1; } _has;
}

@property (nonatomic) BOOL announcementsMuted;
@property (nonatomic) BOOL hasAnnouncementsMuted;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteAnnouncementsMuted;

@end
