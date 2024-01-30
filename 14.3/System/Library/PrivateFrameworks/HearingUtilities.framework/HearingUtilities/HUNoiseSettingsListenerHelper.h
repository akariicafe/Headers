@class NSMutableArray;

@interface HUNoiseSettingsListenerHelper : NSObject {
    id _listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithListenerAddress:(id)a0;
- (void)addSelectorKey:(SEL)a0;

@end
