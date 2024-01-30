@class NSMutableArray;

@interface HUNoiseSettingsListenerHelper : NSObject {
    id _listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (id)initWithListenerAddress:(id)a0;
- (void)addSelectorKey:(SEL)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
