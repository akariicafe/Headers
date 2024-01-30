@class NSXPCConnection;

@interface SBFCARenderer : NSObject {
    NSXPCConnection *_rendererServiceConnection;
}

+ (id)sharedInstance;
+ (BOOL)shouldUseXPCServiceForRendering;

- (void)warmup;
- (id)_remoteObjectProxy;
- (void).cxx_destruct;
- (void)_createConnection;

@end
