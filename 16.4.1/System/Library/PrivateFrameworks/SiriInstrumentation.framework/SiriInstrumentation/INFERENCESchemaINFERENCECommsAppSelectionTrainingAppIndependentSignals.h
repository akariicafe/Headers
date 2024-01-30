@class NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppIndependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char requestOriginLocale : 1; unsigned char requestOriginLanguage : 1; unsigned char communicationType : 1; unsigned char appResolutionType : 1; } _has;
}

@property (nonatomic) long long requestOriginLocale;
@property (nonatomic) BOOL hasRequestOriginLocale;
@property (nonatomic) long long requestOriginLanguage;
@property (nonatomic) BOOL hasRequestOriginLanguage;
@property (nonatomic) long long communicationType;
@property (nonatomic) BOOL hasCommunicationType;
@property (nonatomic) int appResolutionType;
@property (nonatomic) BOOL hasAppResolutionType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteAppResolutionType;
- (void)deleteCommunicationType;
- (void)deleteRequestOriginLanguage;
- (void)deleteRequestOriginLocale;

@end
