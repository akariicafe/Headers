@class NSArray;

@interface _UIContextGraphTrackingAssertion : BSSimpleAssertion {
    NSArray *_contextIDGraph;
    id /* block */ _clientHandlerBlock;
}

@property (readonly, nonatomic) unsigned int contextID;

- (void).cxx_destruct;
- (void)setWindowGraph:(id)a0;
- (void)_setWindowGraph:(id)a0 callHandler:(BOOL)a1;
- (id)initWithContextID:(unsigned int)a0 windowGraph:(id)a1 clientHandlerBlock:(id /* block */)a2 invalidationBlock:(id /* block */)a3;
- (BOOL)isContextIDRelevant:(unsigned int)a0;

@end
