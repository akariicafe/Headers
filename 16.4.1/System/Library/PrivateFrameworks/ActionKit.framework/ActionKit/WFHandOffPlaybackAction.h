@interface WFHandOffPlaybackAction : WFAction

- (id)localEndpoint;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)runWhenInvokedThroughLocalDeviceWithSpecifiedDescriptor:(id)a0 picker:(id)a1;
- (void)askForUserSpecificationOfMissingRouteWithRoutePicker:(id)a0 completionBlock:(id /* block */)a1;
- (id)destinationRouteDescriptor;
- (id)errorFromRoutePickerError:(id)a0;
- (id)errorUserInfoForRoutePickerErrorCode:(long long)a0 involvedRouteName:(id)a1;
- (void)findInvokingHomePodEndpointWithRoutePicker:(id)a0 completionBlock:(id /* block */)a1;
- (id)invokingHomePodRouteDescriptor;
- (void)runWhenInvokedThroughHomePodWithSpecifiedDescriptor:(id)a0 picker:(id)a1;
- (void)runWithSourceRouteUID:(id)a0 destinationRouteUID:(id)a1 routePicker:(id)a2;
- (id)sourceRouteDescriptor;

@end
