@interface RWIProtocolCSSDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { void /* function */ **x0; } *_controller;
}

- (id)initWithController:(struct AugmentableInspectorController { void /* function */ **x0; } *)a0;
- (void)mediaQueryResultChanged;
- (void)nodeLayoutFlagsChangedWithNodeId:(int)a0 layoutFlags:(id *)a1;
- (void)styleSheetAddedWithHeader:(id)a0;
- (void)styleSheetChangedWithStyleSheetId:(id)a0;
- (void)styleSheetRemovedWithStyleSheetId:(id)a0;

@end
