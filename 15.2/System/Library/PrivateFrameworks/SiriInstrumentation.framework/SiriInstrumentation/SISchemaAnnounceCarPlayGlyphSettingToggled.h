@class NSData;

@interface SISchemaAnnounceCarPlayGlyphSettingToggled : SISchemaInstrumentationMessage {
    struct { unsigned char announcementsMuted : 1; } _has;
}

@property (nonatomic) BOOL announcementsMuted;
@property (nonatomic) BOOL hasAnnouncementsMuted;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
