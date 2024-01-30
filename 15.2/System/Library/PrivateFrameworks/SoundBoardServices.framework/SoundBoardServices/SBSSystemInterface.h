@class NSXPCConnection;
@protocol SBSSystemImplementer;

@interface SBSSystemInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSSystemImplementer> _sbProxy;
}

- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)obliterate:(id)a0;
- (void)reboot:(id)a0;
- (void)requestDeferredReboot;
- (void)identifyWithOptions:(id)a0;
- (void)intercomWithOptions:(id)a0;

@end
