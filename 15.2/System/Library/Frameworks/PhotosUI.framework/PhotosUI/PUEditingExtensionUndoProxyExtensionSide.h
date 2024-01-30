@class NSString, NSXPCConnection;
@protocol PUEditingExtensionUndoTarget;

@interface PUEditingExtensionUndoProxyExtensionSide : NSObject <PUEditingExtensionUndoButtonHost>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<PUEditingExtensionUndoTarget> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObject;
- (id)initWithEndpoint:(id)a0;
- (void)performUndo;
- (void)performRedo;
- (void).cxx_destruct;
- (void)setUndoEnabled:(BOOL)a0 redoEnabled:(BOOL)a1;
- (void)setShowUndoRedo:(BOOL)a0;

@end
