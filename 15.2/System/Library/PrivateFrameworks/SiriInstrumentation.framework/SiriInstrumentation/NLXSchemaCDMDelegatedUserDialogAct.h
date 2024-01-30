@class NSString, NSData, SISchemaUUID;

@interface NLXSchemaCDMDelegatedUserDialogAct : SISchemaInstrumentationMessage {
    struct { unsigned char asrHypothesisIndex : 1; } _has;
}

@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *externalParserId;
@property (nonatomic) BOOL hasExternalParserId;
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
