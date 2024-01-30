@class AFSiriAnnouncementRequestCapabilityManager, NSString, DNDEventBehaviorResolutionService, NSObject, BBObserver;
@protocol OS_dispatch_queue;

@interface SBBulletinSpokenObserverGateway : NSObject <BBObserverDelegate, AFSiriAnnouncementRequestCapabilityObserving> {
    BBObserver *_bbObserver;
    DNDEventBehaviorResolutionService *_dndEventBehaviorResolutionService;
    AFSiriAnnouncementRequestCapabilityManager *_announcementRequestCapabilityManager;
    BOOL _canAnnounceNotifications;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)observer:(id)a0 addBulletin:(id)a1 forFeed:(unsigned long long)a2 playLightsAndSirens:(BOOL)a3 withReply:(id /* block */)a4;
- (void)availableAnnouncementRequestTypesChanged:(unsigned long long)a0 onPlatform:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)eligibleAnnouncementRequestTypesChanged:(unsigned long long)a0 onPlatform:(long long)a1;

@end
