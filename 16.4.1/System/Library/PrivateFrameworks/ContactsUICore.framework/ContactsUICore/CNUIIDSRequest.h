@interface CNUIIDSRequest : NSObject

+ (id)IDSResponseQueue;
+ (id)IDSServiceForService:(long long)a0;
+ (id)afterDelayRetryRefreshingStatusOfDestinations:(id)a0 forService:(id)a1 queryControllerWrapper:(id)a2 scheduler:(id)a3;
+ (id)errorRefreshingHandles:(id)a0 forService:(id)a1;
+ (BOOL)isDestinationAvailable:(id)a0 givenStatusesByDestination:(id)a1;
+ (BOOL)isStatusOfAnyDestinationUnknown:(id)a0;
+ (id)refreshStatusOfDestinations:(id)a0 forService:(id)a1 queryControllerWrapper:(id)a2;
+ (id)refreshStatusOfDestinations:(id)a0 forService:(id)a1 queryControllerWrapper:(id)a2 delay:(double)a3 scheduler:(id)a4;
+ (id)resultsForIDSControllerResult:(id)a0 handlesByDestination:(id)a1;
+ (BOOL)shouldRetryRefreshingIDSStatusOfDesinationsGivenResult:(id)a0;
+ (id)validHandlesFromHandles:(id)a0;
+ (id)validateHandles:(id)a0 forService:(long long)a1 scheduler:(id)a2 queryControllerWrapper:(id)a3;

@end
