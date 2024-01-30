@class NSDictionary;

@interface IDSTransactionLogDictionaryMessage : IDSTransactionLogMessage

@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 accountUniqueID:(id)a1 fromID:(id)a2 loginID:(id)a3 serviceName:(id)a4;
- (id)dictionaryRepresentation;

@end
