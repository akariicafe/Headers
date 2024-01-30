@class NSString, NSData;

@interface SUGSchemaSUGInteraction : SISchemaInstrumentationMessage {
    struct { unsigned char relatedSuggestionEventSequenceNum : 1; unsigned char relatedSuggestionsShownCount : 1; unsigned char hasOccurredWithinHour : 1; unsigned char triggerType : 1; } _has;
}

@property (copy, nonatomic) NSString *relatedSuggestionId;
@property (nonatomic) BOOL hasRelatedSuggestionId;
@property (nonatomic) unsigned int relatedSuggestionEventSequenceNum;
@property (nonatomic) BOOL hasRelatedSuggestionEventSequenceNum;
@property (nonatomic) unsigned int relatedSuggestionsShownCount;
@property (nonatomic) BOOL hasRelatedSuggestionsShownCount;
@property (nonatomic) BOOL hasOccurredWithinHour;
@property (nonatomic) BOOL hasHasOccurredWithinHour;
@property (nonatomic) int triggerType;
@property (nonatomic) BOOL hasTriggerType;
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
- (void)deleteHasOccurredWithinHour;
- (void)deleteRelatedSuggestionEventSequenceNum;
- (void)deleteRelatedSuggestionId;
- (void)deleteRelatedSuggestionsShownCount;
- (void)deleteTriggerType;

@end
