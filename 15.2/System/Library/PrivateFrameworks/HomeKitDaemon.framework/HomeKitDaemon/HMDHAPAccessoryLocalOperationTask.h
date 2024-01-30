@class NSString, NSMutableArray;

@interface HMDHAPAccessoryLocalOperationTask : HMDHAPAccessoryTask

@property (readonly) NSMutableArray *characteristicResponses;
@property (readonly) NSString *activityRequestEventName;
@property (readonly) NSString *activityResponseEventName;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 requests:(id)a1 completion:(id /* block */)a2;
- (id /* block */)_completionHandlerForAccessory:(id)a0 responseWaitGroup:(id)a1;
- (void)_dispatchToAccessory:(id)a0 requests:(id)a1 completion:(id /* block */)a2;

@end
