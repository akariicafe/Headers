@class NSString;

@interface AXBGuidedAccessManager : NSObject <MCProfileConnectionObserver> {
    id _notificationToken;
    id _guidedAccessServer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowsTripleClickSheet;
+ (BOOL)inGuidedAccess;
+ (void)initializeMonitor;

- (id)init;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (id)_guidedAccessServer;
- (void)_loadBackboardServerBundle;

@end
