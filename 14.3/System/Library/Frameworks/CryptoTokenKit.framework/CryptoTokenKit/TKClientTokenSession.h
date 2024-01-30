@class LAContext, NSDictionary, TKClientToken, NSArray, NSNumber, NSString;

@interface TKClientTokenSession : NSObject {
    long long _connectionIdentifier;
    NSArray *_advertisedItems;
}

@property (readonly, nonatomic) NSNumber *sessionID;
@property (readonly, nonatomic) LAContext *LAContext;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) TKClientToken *token;
@property (nonatomic) BOOL authenticateWhenNeeded;
@property (readonly, nonatomic) NSArray *keys;
@property (readonly, nonatomic) NSArray *certificates;
@property (readonly, nonatomic) NSArray *identities;
@property (readonly, nonatomic) NSString *slotName;
@property (nonatomic) BOOL _testing_AuthenticateInternally;

- (void)terminate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTokenID:(id)a0 LAContext:(id)a1 error:(id *)a2;
- (BOOL)ensureSessionWithClient:(id)a0 connectionIdentifier:(long long)a1 error:(id *)a2;
- (id)itemsOfClass:(id)a0;
- (id)advertisedItems;
- (BOOL)deleteObject:(id)a0 error:(id *)a1;
- (id)initWithToken:(id)a0 LAContext:(id)a1 parameters:(id)a2 error:(id *)a3;
- (BOOL)evaluateAccessControl:(id)a0 forOperation:(id)a1 error:(id *)a2;
- (id)objectForObjectID:(id)a0 error:(id *)a1;
- (id)withError:(id *)a0 accessControl:(struct __SecAccessControl { } *)a1 invoke:(id /* block */)a2;
- (id)createObjectWithAttributes:(id)a0 error:(id *)a1;

@end
