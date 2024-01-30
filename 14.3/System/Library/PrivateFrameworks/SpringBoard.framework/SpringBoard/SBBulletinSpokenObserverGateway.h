@class NSString, DNDEventBehaviorResolutionService, BBObserver;

@interface SBBulletinSpokenObserverGateway : NSObject <BBObserverDelegate, AFSiriUserNotificationRequestCapabilityObserving> {
    BBObserver *_bbObserver;
    DNDEventBehaviorResolutionService *_dndEventBehaviorResolutionService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)hasEligibleSetupChanged:(BOOL)a0;
- (id)init;
- (void)observer:(id)a0 addBulletin:(id)a1 forFeed:(unsigned long long)a2 playLightsAndSirens:(BOOL)a3 withReply:(id /* block */)a4;
- (void).cxx_destruct;
- (void)requestCanBeHandledChanged:(BOOL)a0;

@end
