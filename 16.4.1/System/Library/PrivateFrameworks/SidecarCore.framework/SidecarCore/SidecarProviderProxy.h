@protocol SidecarServiceProviderDelegate;

@interface SidecarProviderProxy : NSObject <SidecarSessionDelegate>

@property (class, readonly, nonatomic) SidecarProviderProxy *defaultProxy;

@property (weak, nonatomic) id<SidecarServiceProviderDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)sidecarSession:(id)a0 closedWithError:(id)a1;
- (void)sidecarSession:(id)a0 receivedMessage:(id)a1;
- (void)sidecarServiceTerminate;
- (void)sidecarSessionStarted:(id)a0;

@end
