@class KGTransactionToken, KGElementIdentifierSet;

@interface KGGraphChange : NSObject

@property (readonly, nonatomic) KGTransactionToken *transactionToken;
@property (readonly, nonatomic) KGElementIdentifierSet *nodesInserted;
@property (readonly, nonatomic) KGElementIdentifierSet *edgesInserted;
@property (readonly, nonatomic) KGElementIdentifierSet *nodesUpdated;
@property (readonly, nonatomic) KGElementIdentifierSet *edgesUpdated;
@property (readonly, nonatomic) KGElementIdentifierSet *nodesDeleted;
@property (readonly, nonatomic) KGElementIdentifierSet *edgesDeleted;

- (void).cxx_destruct;
- (id)initWithTransactionToken:(id)a0 edgesInserted:(id)a1 edgesUpdated:(id)a2 edgesDeleted:(id)a3;
- (id)initWithTransactionToken:(id)a0 nodesInserted:(id)a1 edgesInserted:(id)a2 nodesUpdated:(id)a3 edgesUpdated:(id)a4 nodesDeleted:(id)a5 edgesDeleted:(id)a6;
- (id)initWithTransactionToken:(id)a0 nodesInserted:(id)a1 nodesUpdated:(id)a2 nodesDeleted:(id)a3;

@end
