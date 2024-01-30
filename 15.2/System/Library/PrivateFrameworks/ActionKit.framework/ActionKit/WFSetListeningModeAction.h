@interface WFSetListeningModeAction : WFAction

- (id)routeDescriptor;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)initializeParameters;
- (id)errorFromRoutePickerError:(id)a0;
- (id)errorUserInfoForRoutePickerErrorCode:(long long)a0;

@end
