@class NSXPCConnection;
@protocol SBSSysdiagnoseImplementer;

@interface SBSSysdiagnoseInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSSysdiagnoseImplementer> _sbProxy;
}

- (id)initWithTarget:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)sysdiagnoseHasStarted:(BOOL)a0;

@end
