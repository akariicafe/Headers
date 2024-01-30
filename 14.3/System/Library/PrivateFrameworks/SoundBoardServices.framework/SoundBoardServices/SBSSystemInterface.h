@class NSXPCConnection;
@protocol SBSSystemImplementer;

@interface SBSSystemInterface : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSSystemImplementer> _sbProxy;
}

- (id)initWithTarget:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reboot:(id)a0;
- (void)obliterate:(id)a0;
- (void)requestDeferredReboot;
- (void)identifyWithOptions:(id)a0;

@end
