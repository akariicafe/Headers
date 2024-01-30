@class NSString, NSArray, NSData, SISchemaUUID;

@interface FLOWLINKSchemaFLOWLINKAction : SISchemaInstrumentationMessage {
    struct { unsigned char systemProtocol : 1; unsigned char presentationStyle : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *actionIdentifierName;
@property (nonatomic) BOOL hasActionIdentifierName;
@property (nonatomic) int systemProtocol;
@property (nonatomic) BOOL hasSystemProtocol;
@property (nonatomic) int presentationStyle;
@property (nonatomic) BOOL hasPresentationStyle;
@property (copy, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)parametersCount;
- (void)clearParameters;
- (void)addParameters:(id)a0;
- (id)parametersAtIndex:(unsigned long long)a0;
- (void)deleteActionIdentifierName;
- (void)deleteLinkId;
- (void)deleteParameters;
- (void)deletePresentationStyle;
- (void)deleteSystemProtocol;

@end
