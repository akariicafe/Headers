@class NACIDSServer;

@interface NACDaemonServer : NSObject {
    NACIDSServer *_idsServer;
}

+ (id)gizmoServer;
+ (id)companionServer;

- (void).cxx_destruct;

@end
