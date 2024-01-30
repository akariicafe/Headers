@class NSMutableArray;

@interface AXHASettingsListenerHelper : NSObject {
    id _listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (void)addSelectorKey:(SEL)a0;
- (id)initWithListenerAddress:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
