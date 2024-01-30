@class STAskForTimeRequest, STAskForTimeClient;

@interface STAskForTimeResource : NSObject

@property (retain, nonatomic) STAskForTimeClient *askForTimeClient;
@property (readonly, nonatomic) STAskForTimeRequest *request;
@property (readonly, nonatomic) int notificationToken;
@property (readonly, nonatomic) id /* block */ changeHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (void)checkRequestForAdditionalTimeWithResponseHandler:(id /* block */)a0;
- (void)_approveExceptionForRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithResourceIdentifier:(id)a0 resourceDisplayName:(id)a1 usageType:(long long)a2 changeHandler:(id /* block */)a3;
- (void)requestAdditionalTime:(double)a0 completionHandler:(id /* block */)a1;
- (void)approveAdditionalTime:(double)a0 completionHandler:(id /* block */)a1;
- (void)approveOneMoreMinuteWithCompletionHandler:(id /* block */)a0;
- (void)cancelOutstandingRequestsWithCompletion:(id /* block */)a0;

@end
