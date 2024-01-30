@class NSString, NSObject, NSXPCConnection;
@protocol LiveFSMounterClient, LiveFSMounterClientHelper;

@interface LiveFSMountClient : NSObject {
    NSXPCConnection *conn;
    NSString *provider;
    NSObject<LiveFSMounterClient, LiveFSMounterClientHelper> *helper;
}

+ (id)newClientForProvider:(id)a0;
+ (id)newClient;

- (id)initWithProvider:(id)a0;
- (void).cxx_destruct;
- (id)mounts:(id *)a0;
- (id)fixupConnectionFor:(id)a0;
- (id)mountVolume:(id)a0 displayName:(id)a1 provider:(id)a2 domainError:(id)a3 on:(id)a4 how:(int)a5;
- (id)allMounts:(id *)a0;
- (id)mountVolume:(id)a0 displayName:(id)a1 provider:(id)a2 on:(id)a3 how:(int)a4;
- (id)mountVolume:(id)a0 provider:(id)a1 on:(id)a2 how:(int)a3;
- (id)unmountVolume:(id)a0 how:(int)a1;
- (id)unmountVolumeByID:(unsigned int)a0 how:(int)a1;
- (void)unmountVolumeNamed:(id)a0 providerName:(id)a1 domainError:(id)a2 how:(int)a3 reply:(id /* block */)a4;
- (int)verboseLevelOrError:(id *)a0;
- (id)setVerboseLevel:(int)a0;
- (id)updateErrorStateForVolume:(id)a0 provider:(id)a1 domainError:(id)a2;

@end
