@class NSMutableArray, AXBaseSettings;

@interface AXSettingsObjectDestructionHelper : NSObject {
    void *_listenerAddress;
    NSMutableArray *_selectorKeys;
    AXBaseSettings *_settings;
}

- (id)initWithListenerAddress:(void *)a0 forSettings:(id)a1;
- (void)addSelectorKey:(SEL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
