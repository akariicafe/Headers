@class HCSettings, NSMutableArray;

@interface HCSettingsListenerHelper : NSObject {
    id _listenerAddress;
    HCSettings *_delegate;
    NSMutableArray *_selectorKeys;
}

- (id)initWithListenerAddress:(id)a0 andDelegate:(id)a1;
- (void)addSelectorKey:(SEL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
