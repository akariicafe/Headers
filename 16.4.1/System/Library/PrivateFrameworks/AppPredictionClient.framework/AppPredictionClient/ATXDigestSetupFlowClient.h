@class ATXNotificationDigestRankerClient, NSObject;
@protocol OS_dispatch_queue;

@interface ATXDigestSetupFlowClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ATXNotificationDigestRankerClient *_xpcClient;
}

- (id)init;
- (void).cxx_destruct;
- (void)_helperAppsSortedByNotificationsReceivedInPreviousNumDays:(id)a0 completionHandler:(id /* block */)a1;
- (void)appsSortedByNotificationsReceivedInPreviousNumDays:(id)a0 completionHandler:(id /* block */)a1;
- (void)appsSortedByNotificationsReceivedInPreviousNumDaysRaw:(id)a0 completionHandler:(id /* block */)a1;
- (id)sortDigestResponseWithNoNotificationVolume:(id)a0;

@end
