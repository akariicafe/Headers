@class NSXPCConnection;
@protocol SBSCannedDemoServiceImplementer;

@interface SBSCannedDemoInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSCannedDemoServiceImplementer> _sbProxy;
}

- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)siriUtteranceFileToBePlayed:(id)a0 duckMusic:(BOOL)a1 reply:(id /* block */)a2;

@end
