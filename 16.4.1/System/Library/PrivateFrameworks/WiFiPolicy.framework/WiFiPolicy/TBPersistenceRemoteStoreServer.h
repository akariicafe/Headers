@class NSURL, NSXPCStoreServer, NSDictionary;

@interface TBPersistenceRemoteStoreServer : NSObject

@property (retain, nonatomic) NSXPCStoreServer *xpcStoreServer;
@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSDictionary *serverOptions;

- (void)startListening;
- (id)initWithStoreURL:(id)a0 modelURL:(id)a1 options:(id)a2;
- (void).cxx_destruct;

@end
