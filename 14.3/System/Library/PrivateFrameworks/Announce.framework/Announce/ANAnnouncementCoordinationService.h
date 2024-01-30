@class NSObject, RPCompanionLinkClient;
@protocol OS_dispatch_queue, ANAnnouncementCoordinationServiceDelegate;

@interface ANAnnouncementCoordinationService : NSObject {
    NSObject<OS_dispatch_queue> *_rapportQueue;
}

@property (readonly, nonatomic) RPCompanionLinkClient *companionLinkClient;
@property (weak, nonatomic) id<ANAnnouncementCoordinationServiceDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)_tearDownLink;
- (void)broadcastAnnouncementPlayed:(id)a0;
- (void)_setupLink;
- (void)_registerForEvents;

@end
