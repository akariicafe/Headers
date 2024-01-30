@class NSObject, RPCompanionLinkClient;
@protocol OS_dispatch_queue, ANCompanionConnectionDelegate;

@interface ANCompanionConnection : NSObject {
    NSObject<OS_dispatch_queue> *_rapportQueue;
}

@property (readonly, nonatomic) RPCompanionLinkClient *companionLinkClient;
@property (weak, nonatomic) id<ANCompanionConnectionDelegate> delegate;

- (void)_tearDownLink;
- (void).cxx_destruct;
- (void)_setupLink;
- (id)init;
- (void)_registerForEvents;
- (void)broadcastAnnouncementPlayed:(id)a0;

@end
