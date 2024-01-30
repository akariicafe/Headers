@class NSString, NSMutableArray, NSData;

@interface NPKProtoGenerateTransactionKeyWithParametersResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTransactionKeyIdentifier;
@property (retain, nonatomic) NSString *transactionKeyIdentifier;
@property (retain, nonatomic) NSMutableArray *transactionKeyCertChains;
@property (readonly, nonatomic) BOOL hasAppletIdentifier;
@property (retain, nonatomic) NSData *appletIdentifier;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

+ (Class)transactionKeyCertChainType;

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
- (void)addTransactionKeyCertChain:(id)a0;
- (unsigned long long)transactionKeyCertChainsCount;
- (void)clearTransactionKeyCertChains;
- (id)transactionKeyCertChainAtIndex:(unsigned long long)a0;

@end
