@class NSString, NSData;

@interface MHSchemaMHAssistantDaemonAudioRecordingFirstBufferStart : SISchemaInstrumentationMessage {
    struct { unsigned char firstBufferStartTimeOffsetInNs : 1; } _has;
}

@property (nonatomic) unsigned long long firstBufferStartTimeOffsetInNs;
@property (nonatomic) BOOL hasFirstBufferStartTimeOffsetInNs;
@property (copy, nonatomic) NSString *audioInterfaceVendorId;
@property (nonatomic) BOOL hasAudioInterfaceVendorId;
@property (copy, nonatomic) NSString *audioInterfaceProductName;
@property (nonatomic) BOOL hasAudioInterfaceProductName;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteAudioInterfaceProductName;
- (void)deleteAudioInterfaceVendorId;
- (void)deleteFirstBufferStartTimeOffsetInNs;

@end
