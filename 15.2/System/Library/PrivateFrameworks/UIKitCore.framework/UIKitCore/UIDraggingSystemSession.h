@class UIDraggingSystemSessionInfo, UIDraggingSystemTouchRoutingPolicy;
@protocol _DUIServerSessionSystemApp;

@interface UIDraggingSystemSession : NSObject

@property (retain, nonatomic) UIDraggingSystemSessionInfo *info;
@property (retain, nonatomic) UIDraggingSystemTouchRoutingPolicy *routingPolicy;
@property (retain, nonatomic, getter=_serverSession) id<_DUIServerSessionSystemApp> serverSession;
@property (nonatomic, getter=isCommandeered) BOOL commandeered;

- (unsigned long long)_indexOfDragItemInSession:(id)a0;
- (void)commandeerImmediately;
- (void)loadURLForItem:(id)a0 completion:(id /* block */)a1;
- (void)loadUserActivityForItem:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
