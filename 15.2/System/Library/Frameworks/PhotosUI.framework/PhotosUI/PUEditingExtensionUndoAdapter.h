@class NSUndoManager, NSString;
@protocol PUEditingExtensionUndoButtonHost;

@interface PUEditingExtensionUndoAdapter : NSObject <PUEditingExtensionUndoTarget>

@property (readonly, nonatomic) id<PUEditingExtensionUndoButtonHost> buttonHost;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithButtonHost:(id)a0;
- (void)performUndo;
- (void)performRedo;
- (void)_updateButtonState;
- (void).cxx_destruct;
- (void)_registerForUndoManagerNotifications:(id)a0;
- (void)_unregisterForUndoManagerNotifications:(id)a0;

@end
