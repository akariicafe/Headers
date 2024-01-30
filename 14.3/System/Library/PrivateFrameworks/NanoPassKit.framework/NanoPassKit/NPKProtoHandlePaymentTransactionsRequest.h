@class NSMutableArray;

@interface NPKProtoHandlePaymentTransactionsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *transactionsBytes;
@property (retain, nonatomic) NSMutableArray *transactionPassIDs;
@property (retain, nonatomic) NSMutableArray *passAppletStates;

+ (Class)transactionsBytesType;
+ (Class)transactionPassIDsType;
+ (Class)passAppletStatesType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addTransactionsBytes:(id)a0;
- (void)addTransactionPassIDs:(id)a0;
- (unsigned long long)transactionsBytesCount;
- (void)clearTransactionsBytes;
- (id)transactionsBytesAtIndex:(unsigned long long)a0;
- (unsigned long long)transactionPassIDsCount;
- (void)clearTransactionPassIDs;
- (id)transactionPassIDsAtIndex:(unsigned long long)a0;
- (void)addPassAppletStates:(id)a0;
- (unsigned long long)passAppletStatesCount;
- (void)clearPassAppletStates;
- (id)passAppletStatesAtIndex:(unsigned long long)a0;

@end
