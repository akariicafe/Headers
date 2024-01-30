@class NSData;

@interface DIMSchemaDIMDataSharingSettings : SISchemaInstrumentationMessage {
    struct { unsigned char isDiagnosticsAndUsageEnabled : 1; unsigned char isAppAnalyticsEnabled : 1; } _has;
}

@property (nonatomic) BOOL isDiagnosticsAndUsageEnabled;
@property (nonatomic) BOOL hasIsDiagnosticsAndUsageEnabled;
@property (nonatomic) BOOL isAppAnalyticsEnabled;
@property (nonatomic) BOOL hasIsAppAnalyticsEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteIsAppAnalyticsEnabled;
- (void)deleteIsDiagnosticsAndUsageEnabled;

@end
