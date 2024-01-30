@class NSXPCConnection;
@protocol SBSCannedDemoServiceImplementer;

@interface SBSCannedDemoInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSCannedDemoServiceImplementer> _sbProxy;
}

- (id)initWithTarget:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)siriUtteranceFileToBePlayed:(id)a0 duckMusic:(BOOL)a1 reply:(id /* block */)a2;

@end
