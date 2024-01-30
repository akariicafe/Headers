@class NSString, NSMutableDictionary, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface SBSAccessibilityWindowHostingController : NSObject <SBSAccessibilityWindowHostingServerToClientInterface> {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableDictionary *_registeredWindowContextIDsToLevel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)registerWindowWithContextID:(unsigned int)a0 atLevel:(double)a1;
- (void)unregisterWindowWithContextID:(unsigned int)a0;
- (id)_connectionQueue_connection;
- (void)_connectionQueue_handleInterruption;
- (void)invalidate;

@end
