@class NSString, NSXPCConnection;
@protocol _DUIServerSessionDestination;

@interface _UIDruidDestinationConnection : NSObject <_DUIClientDestination, _DUIClientSessionDestination, _UIDruidDestinationConnection> {
    NSXPCConnection *_connection;
    id<_DUIServerSessionDestination> _serverSession;
}

@property (nonatomic) long long state;
@property (readonly, nonatomic) unsigned int sessionIdentifier;
@property (copy, nonatomic) id /* block */ connectionBlock;
@property (copy, nonatomic) id /* block */ dragPreviewProviderBlock;
@property (copy, nonatomic) id /* block */ itemsAddedBlock;
@property (copy, nonatomic) id /* block */ dropPerformBlock;
@property (copy, nonatomic) id /* block */ handOffDroppedItemsBlock;
@property (copy, nonatomic) id /* block */ dragEndBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sawDragEndEvent;
- (oneway void)addedItemCollection:(id)a0;
- (void)dirtyItems:(id)a0;
- (oneway void)dragEnded;
- (void)enableKeyboardIfNeeded;
- (oneway void)handOffDroppedItems:(id)a0 withFence:(id)a1;
- (id)initWithSessionIdentifier:(unsigned int)a0 systemPolicy:(BOOL)a1;
- (oneway void)performDropWithItemCollection:(id)a0 dataProviderEndpoint:(id)a1 visibleDroppedItems:(id)a2 reply:(id /* block */)a3;
- (oneway void)requestDragPreviewsForIndexSet:(id)a0 reply:(id /* block */)a1;
- (void)requestDropWithOperation:(unsigned long long)a0;
- (void)requestVisibleItems:(id /* block */)a0;
- (void)takePotentialDrop:(id)a0;

@end
