@class NSData;

@interface RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived : SISchemaInstrumentationMessage {
    struct { unsigned char syncTokenFetchRequestTransferLatencyInMs : 1; } _has;
}

@property (nonatomic) unsigned long long syncTokenFetchRequestTransferLatencyInMs;
@property (nonatomic) BOOL hasSyncTokenFetchRequestTransferLatencyInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteSyncTokenFetchRequestTransferLatencyInMs;

@end
