@class NSString, NSObject, NSXPCConnection;
@protocol LiveFSMounterClient, LiveFSMounterClientHelper;

@interface LiveFSMountClient : NSObject {
    NSXPCConnection *conn;
    NSString *provider;
    NSObject<LiveFSMounterClient, LiveFSMounterClientHelper> *helper;
}

+ (id)newClientForProvider:(id)a0;
+ (id)newClient;

- (void).cxx_destruct;
- (id)initWithProvider:(id)a0;
- (id)mounts:(id *)a0;
- (id)fixupConnectionFor:(id)a0;
- (id)allMounts:(id *)a0;
- (id)unmountVolume:(id)a0 how:(int)a1;
- (id)unmountVolumeByID:(unsigned int)a0 how:(int)a1;
- (void)unmountVolumeNamed:(id)a0 providerName:(id)a1 domainError:(id)a2 how:(int)a3 reply:(id /* block */)a4;
- (int)verboseLevelOrError:(id *)a0;
- (id)setVerboseLevel:(int)a0;

@end
