@interface RWIProtocolCSSDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { void /* function */ **x0; } *_controller;
}

- (id)initWithController:(struct AugmentableInspectorController { void /* function */ **x0; } *)a0;
- (void)mediaQueryResultChanged;
- (void)styleSheetChangedWithStyleSheetId:(id)a0;
- (void)styleSheetAddedWithHeader:(id)a0;
- (void)styleSheetRemovedWithStyleSheetId:(id)a0;
- (void)nodeLayoutContextTypeChangedWithNodeId:(int)a0 layoutContextType:(long long *)a1;

@end
