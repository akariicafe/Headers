@class HCSettings, NSMutableArray;

@interface HCSettingsListenerHelper : NSObject {
    id _listenerAddress;
    HCSettings *_delegate;
    NSMutableArray *_selectorKeys;
}

- (void).cxx_destruct;
- (id)initWithListenerAddress:(id)a0 andDelegate:(id)a1;
- (void)dealloc;
- (void)addSelectorKey:(SEL)a0;

@end
