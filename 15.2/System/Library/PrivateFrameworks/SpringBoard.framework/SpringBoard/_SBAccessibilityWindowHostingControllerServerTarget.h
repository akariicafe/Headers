@class BSServiceConnection;
@protocol SBSAccessibilityWindowHostingClientToServerInterface;

@interface _SBAccessibilityWindowHostingControllerServerTarget : NSObject

@property (class, readonly) _SBAccessibilityWindowHostingControllerServerTarget *currentTarget;

@property (readonly, weak, nonatomic) BSServiceConnection *connection;
@property (weak, nonatomic) id<SBSAccessibilityWindowHostingClientToServerInterface> proxyInterface;

- (void)_performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)registerWindowWithContextID:(id)a0 atLevel:(id)a1;
- (void)unregisterWindowWithContextID:(id)a0;
- (id)initWithConnection:(id)a0 proxyInterface:(id)a1;

@end
