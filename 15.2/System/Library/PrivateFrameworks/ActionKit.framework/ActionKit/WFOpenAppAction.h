@class NSString;

@interface WFOpenAppAction : WFAction <WFStandaloneShortcutAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)generateStandaloneShortcutRepresentation:(id /* block */)a0;

@end
