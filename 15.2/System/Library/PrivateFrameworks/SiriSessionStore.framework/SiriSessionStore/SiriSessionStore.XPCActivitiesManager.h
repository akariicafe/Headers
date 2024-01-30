@class _TtC16SiriSessionStore20XPCActivitiesManager;

@interface SiriSessionStore.XPCActivitiesManager : NSObject {
    void /* unknown type, empty encoding */ activityQueue;
    void /* unknown type, empty encoding */ xpcActivities;
    void /* unknown type, empty encoding */ xpcActivitiesRegistered;
}

@property (class, nonatomic, readonly) _TtC16SiriSessionStore20XPCActivitiesManager *shared;

- (void)notifySiriSettingWasToggled;
- (void).cxx_destruct;
- (void)manageXPCActivities;
- (id)init;

@end
