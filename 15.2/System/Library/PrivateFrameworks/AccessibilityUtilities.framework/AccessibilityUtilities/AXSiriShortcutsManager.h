@class NSArray, VCVoiceShortcutClient, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AXSiriShortcutsManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_shortcuts;
    NSMutableDictionary *_updateBlocks;
    int _contentProtectionNotifyToken;
}

@property (class, readonly, nonatomic) AXSiriShortcutsManager *sharedManager;

@property (retain, nonatomic) VCVoiceShortcutClient *shortcutClient;
@property (readonly, nonatomic) NSArray *shortcuts;

- (void)handleVoiceShortcutClientDataUpdateNotification:(id)a0;
- (void)_loadShortcuts;
- (id)registerShortcutsDidChangeBlock:(id /* block */)a0;
- (void)unregisterShortcutsDidChangeBlock:(id)a0;
- (id)shortcutForIdentifier:(id)a0;
- (void)performShortcut:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
