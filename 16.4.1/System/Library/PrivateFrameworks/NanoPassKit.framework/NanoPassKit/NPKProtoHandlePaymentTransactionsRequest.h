@class NSMutableArray;

@interface NPKProtoHandlePaymentTransactionsRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *transactionsBytes;
@property (retain, nonatomic) NSMutableArray *transactionPassIDs;
@property (retain, nonatomic) NSMutableArray *passAppletStates;

+ (Class)passAppletStatesType;
+ (Class)transactionPassIDsType;
+ (Class)transactionsBytesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addPassAppletStates:(id)a0;
- (void)addTransactionPassIDs:(id)a0;
- (void)addTransactionsBytes:(id)a0;
- (void)clearPassAppletStates;
- (void)clearTransactionPassIDs;
- (void)clearTransactionsBytes;
- (id)passAppletStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)passAppletStatesCount;
- (id)transactionPassIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)transactionPassIDsCount;
- (id)transactionsBytesAtIndex:(unsigned long long)a0;
- (unsigned long long)transactionsBytesCount;

@end
