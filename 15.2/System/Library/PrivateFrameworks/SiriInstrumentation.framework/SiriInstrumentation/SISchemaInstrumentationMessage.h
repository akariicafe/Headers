@interface SISchemaInstrumentationMessage : PBCodable

- (id)qualifiedMessageName;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (id)formattedJsonBody;

@end
