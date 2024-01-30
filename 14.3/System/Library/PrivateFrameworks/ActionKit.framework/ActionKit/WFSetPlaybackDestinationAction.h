@interface WFSetPlaybackDestinationAction : WFAction

- (id)routeDescriptor;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)subcategoryForCategory:(id)a0;
- (id)errorFromRoutePickerError:(id)a0;
- (id)errorUserInfoForRoutePickerErrorCode:(long long)a0;

@end
