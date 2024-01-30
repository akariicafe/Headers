@class NSData;

@interface CNVSchemaCNVIntentFinalExecutionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char eagerStatus : 1; unsigned char bypassReason : 1; unsigned char maxRss : 1; } _has;
}

@property (nonatomic) int eagerStatus;
@property (nonatomic) BOOL hasEagerStatus;
@property (nonatomic) int bypassReason;
@property (nonatomic) BOOL hasBypassReason;
@property (nonatomic) unsigned long long maxRss;
@property (nonatomic) BOOL hasMaxRss;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
