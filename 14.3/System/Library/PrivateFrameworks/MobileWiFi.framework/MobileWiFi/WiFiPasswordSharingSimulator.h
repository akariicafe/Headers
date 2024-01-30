@class SFPasswordSharingService, NSObject;
@protocol OS_dispatch_queue;

@interface WiFiPasswordSharingSimulator : NSObject <SFPasswordSharingServiceDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    SFPasswordSharingService *_service;
    id /* block */ _replyHandler;
}

- (id)init;
- (void)dealloc;
- (void)service:(id)a0 receivedNetworkInfo:(id)a1;
- (BOOL)service:(id)a0 shouldPromptForNetwork:(id)a1;
- (void)runWithSSID:(id)a0 reply:(id /* block */)a1;

@end
