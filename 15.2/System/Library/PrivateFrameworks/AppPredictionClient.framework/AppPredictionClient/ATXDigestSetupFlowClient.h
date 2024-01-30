@class ATXNotificationDigestRankerClient, NSObject;
@protocol OS_dispatch_queue;

@interface ATXDigestSetupFlowClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ATXNotificationDigestRankerClient *_xpcClient;
}

- (void).cxx_destruct;
- (id)init;
- (void)appsSortedByNotificationsReceivedInPreviousNumDays:(id)a0 completionHandler:(id /* block */)a1;
- (id)sortDigestResponseWithNoNotificationVolume:(id)a0;

@end
