@class INFocusStatus, DNDAvailabilityService;

@interface INFocusStatusCenter : NSObject

@property (class, readonly, nonatomic) INFocusStatusCenter *defaultCenter;

@property (readonly, nonatomic) DNDAvailabilityService *service;
@property (readonly, nonatomic) INFocusStatus *focusStatus;
@property (readonly, nonatomic) long long authorizationStatus;

- (void)requestAuthorizationWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
