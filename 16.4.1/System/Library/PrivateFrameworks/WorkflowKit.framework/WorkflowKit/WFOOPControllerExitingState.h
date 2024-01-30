@class NSString;

@interface WFOOPControllerExitingState : WFOOPControllerState <WFState>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)stage;
- (BOOL)canTransitionToState:(id)a0;

@end
