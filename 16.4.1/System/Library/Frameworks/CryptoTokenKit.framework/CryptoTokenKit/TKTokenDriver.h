@class TKSharedResourceSlot, NSMutableDictionary, NSString, NSDictionary, NSArray, TKTokenDriverContext;
@protocol TKTokenDriverDelegate;

@interface TKTokenDriver : NSObject {
    id _keepAlive;
}

@property (weak, nonatomic) TKTokenDriverContext *context;
@property (readonly, nonatomic) NSMutableDictionary *tokenConnections;
@property (retain, nonatomic) id keepAlive;
@property (retain, nonatomic) TKSharedResourceSlot *keepAliveResourceSlot;
@property (readonly) NSString *classID;
@property (retain) NSDictionary *extensionAttributes;
@property (readonly, nonatomic) NSArray *tokenSessions;
@property (weak) id<TKTokenDriverDelegate> delegate;

+ (id)createDriver;

- (void)terminate;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)acquireTokenWithSlot:(id)a0 AID:(id)a1 reply:(id /* block */)a2;
- (void)acquireTokenWithInstanceID:(id)a0 reply:(id /* block */)a1;
- (void)auditAuthOperation:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 success:(BOOL)a2;
- (void)configureWithReply:(id /* block */)a0;
- (id)createTokenWithSlot:(id)a0 AID:(id)a1 error:(id *)a2;
- (id)endpointForToken:(id)a0;
- (void)getTokenWithAttributes:(id)a0 reply:(id /* block */)a1;
- (void)releaseTokenWithInstanceID:(id)a0;

@end
