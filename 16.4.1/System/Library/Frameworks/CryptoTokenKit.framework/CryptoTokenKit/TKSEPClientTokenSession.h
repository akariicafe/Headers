@class TKTokenID;

@interface TKSEPClientTokenSession : TKClientTokenSession

@property (readonly, nonatomic) TKTokenID *tokenID;

- (id)createObjectWithAttributes:(id)a0 error:(id *)a1;
- (BOOL)forceSystemSession;
- (id)objectForObjectID:(id)a0 error:(id *)a1;
- (id)initWithToken:(id)a0 LAContext:(id)a1 parameters:(id)a2 error:(id *)a3;

@end
