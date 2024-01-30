@class POMMESSchemaPOMMESSiriPegasusMetadata, NSArray, NSString, POMMESSchemaPOMMESClientConversationMetadata, POMMESSchemaPOMMESPegasusQueryMetadata, NSData;

@interface POMMESSchemaPOMMESPegasusRequestArguments : SISchemaInstrumentationMessage {
    struct { unsigned char isDataOnlyRequest : 1; unsigned char conversationContextBytesLength : 1; } _has;
}

@property (copy, nonatomic) NSArray *queries;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusQueryMetadata *queryMetadata;
@property (nonatomic) BOOL hasQueryMetadata;
@property (copy, nonatomic) NSString *featureFlag;
@property (nonatomic) BOOL hasFeatureFlag;
@property (retain, nonatomic) POMMESSchemaPOMMESSiriPegasusMetadata *siriPegasusMetadata;
@property (nonatomic) BOOL hasSiriPegasusMetadata;
@property (nonatomic) BOOL isDataOnlyRequest;
@property (nonatomic) BOOL hasIsDataOnlyRequest;
@property (retain, nonatomic) POMMESSchemaPOMMESClientConversationMetadata *clientConversationMetadata;
@property (nonatomic) BOOL hasClientConversationMetadata;
@property (nonatomic) unsigned int conversationContextBytesLength;
@property (nonatomic) BOOL hasConversationContextBytesLength;
@property (copy, nonatomic) NSString *personalDomainFallback;
@property (nonatomic) BOOL hasPersonalDomainFallback;
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
- (id)queriesAtIndex:(unsigned long long)a0;
- (void)addQueries:(id)a0;
- (void)clearQueries;
- (void)deleteClientConversationMetadata;
- (void)deleteConversationContextBytesLength;
- (void)deleteFeatureFlag;
- (void)deleteIsDataOnlyRequest;
- (void)deletePersonalDomainFallback;
- (void)deleteQueries;
- (void)deleteQueryMetadata;
- (void)deleteSiriPegasusMetadata;
- (unsigned long long)queriesCount;

@end
