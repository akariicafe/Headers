@class NSData;

@interface IDSTransactionLogDataMessage : IDSTransactionLogMessage

@property (readonly, nonatomic) NSData *dataValue;

- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 accountUniqueID:(id)a1 fromID:(id)a2 loginID:(id)a3 serviceName:(id)a4;

@end
