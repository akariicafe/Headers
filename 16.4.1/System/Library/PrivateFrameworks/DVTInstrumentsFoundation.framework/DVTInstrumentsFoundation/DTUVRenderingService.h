@class DTXConnection;

@interface DTUVRenderingService : DTXService {
    DTXConnection *_connection;
}

+ (void)registerCapabilities:(id)a0;

- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)initWithChannel:(id)a0;
- (BOOL)processMessage:(id)a0 error:(id *)a1;
- (BOOL)_launchCLIFromPath:(id)a0 message:(id)a1 arguments:(id)a2 environment:(id)a3 error:(id *)a4;
- (BOOL)processCommand:(id)a0 fromMessage:(id)a1 error:(id *)a2;
- (BOOL)processConnectToPreviewHostFromMessage:(id)a0 error:(id *)a1;
- (BOOL)processForwardMessageFromMessage:(id)a0 error:(id *)a1;
- (BOOL)processStartCLIFromMessage:(id)a0 error:(id *)a1;

@end
