@class NSMutableArray;

@interface AXSettingsObjectDestructionHelper : NSObject {
    void *_listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithListenerAddress:(void *)a0;
- (void)addSelectorKey:(SEL)a0;

@end
