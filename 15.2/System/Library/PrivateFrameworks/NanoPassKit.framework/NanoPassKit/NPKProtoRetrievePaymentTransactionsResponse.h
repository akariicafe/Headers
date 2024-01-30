@class NSMutableArray;

@interface NPKProtoRetrievePaymentTransactionsResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *transactionsBytes;
@property (retain, nonatomic) NSMutableArray *transactionPassIDs;

+ (Class)transactionsBytesType;
+ (Class)transactionPassIDsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addTransactionsBytes:(id)a0;
- (void)addTransactionPassIDs:(id)a0;
- (unsigned long long)transactionsBytesCount;
- (void)clearTransactionsBytes;
- (id)transactionsBytesAtIndex:(unsigned long long)a0;
- (unsigned long long)transactionPassIDsCount;
- (void)clearTransactionPassIDs;
- (id)transactionPassIDsAtIndex:(unsigned long long)a0;

@end
