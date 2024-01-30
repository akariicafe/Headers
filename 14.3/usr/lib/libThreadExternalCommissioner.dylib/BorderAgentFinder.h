@class NSString, NSNetServiceBrowser, NSMutableArray;
@protocol BorderAgentListener;

@interface BorderAgentFinder : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSNetServiceBrowser *_browser;
    NSMutableArray *_borderAgents;
}

@property (weak) id<BorderAgentListener> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netServiceWillResolve:(id)a0;
- (void)stop;
- (void)netServiceBrowserWillSearch:(id)a0;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (unsigned long long)getNumberOfBorderAgents;
- (id)getBorderAgentAtIndex:(unsigned long long)a0;
- (id)getAgentDescription:(unsigned long long)a0;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)start;
- (void)netServiceBrowserDidStopSearch:(id)a0;

@end
