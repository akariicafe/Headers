@class NSObject, MRXPCConnection;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface MRMediaRemoteService : NSObject {
    const struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void *x8; } *clientModule;
    const struct { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; } *browsableContentEndpoint;
    const struct { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; } *voiceRecordingEndpoint;
    const struct { void *x0; id /* block */ x1; } *televisionEndpoint;
    const struct { void *x0; void /* function */ *x1; } *agentEndpoint;
}

@property (retain, nonatomic) MRXPCConnection *mrXPCConnection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackPriorityQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *browsableContentQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *voiceInputQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *televisionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *agentQueue;
@property (nonatomic) BOOL isRunning;

- (id)getActiveSystemEndpointUIDForType:(long long)a0;
- (void)resolvePlayerPath:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (BOOL)deviceSupportsUISessions;
- (struct CGSize { double x0; double x1; })imageDimensionsForArtworkData:(id)a0;
- (void)getDeviceInfoForPlayerPath:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)UIServerRelayEndpoint;
- (void).cxx_destruct;

@end
