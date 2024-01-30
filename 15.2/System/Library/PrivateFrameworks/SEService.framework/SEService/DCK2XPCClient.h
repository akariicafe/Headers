@class NSXPCConnection;

@interface DCK2XPCClient : NSObject {
    NSXPCConnection *connection;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)getROP:(id *)a0;
- (id)connectToService;
- (void)connectionResetHandler;
- (id)suspendRanging:(id)a0;
- (id)setUWBDebugOptions:(unsigned long long)a0;
- (id)setUWBStartTimeOffsetMS:(unsigned long long)a0;
- (id)setUWBConfigData:(id)a0;
- (id)passThrough:(id)a0 keyIdentifier:(id)a1;
- (id)requestBTPairing:(id)a0;
- (id)enableSMB:(id)a0 error:(id *)a1;

@end
