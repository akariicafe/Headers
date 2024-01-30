@class NSUndoManager, NSString;
@protocol PUEditingExtensionUndoButtonHost;

@interface PUEditingExtensionUndoAdapter : NSObject <PUEditingExtensionUndoTarget>

@property (readonly, nonatomic) id<PUEditingExtensionUndoButtonHost> buttonHost;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performRedo;
- (void)performUndo;
- (void)_updateButtonState;
- (void)_registerForUndoManagerNotifications:(id)a0;
- (void)_unregisterForUndoManagerNotifications:(id)a0;
- (id)initWithButtonHost:(id)a0;

@end
