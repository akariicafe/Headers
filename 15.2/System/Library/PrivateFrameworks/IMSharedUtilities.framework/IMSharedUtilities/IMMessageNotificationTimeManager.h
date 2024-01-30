@class NSString, NSMutableDictionary, BKSApplicationStateMonitor;

@interface IMMessageNotificationTimeManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *chatsStartTimeDictionary;
@property (retain, nonatomic) NSString *latestIDSTokenURI;
@property (retain, nonatomic) BKSApplicationStateMonitor *appStateMonitor;

+ (id)sharedInstance;

- (long long)_getTimeWindowOverride;
- (BOOL)_isToneToggleSwitchOn;
- (long long)_getToneTimeWindow;
- (void)tearDownSessionForChatIdentifier:(id)a0;
- (BOOL)_shouldSendNotificationForChatIdentifier:(id)a0;
- (void)setDate:(id)a0 forChatIdentifier:(id)a1;
- (void)setLatestNotificationIDSTokenURI:(id)a0;
- (void)sendNotificationMessageIfNeededForIncomingMessageFromChatIdentifier:(id)a0;
- (void)acquireAssertionToUnsuspendProcess;
- (id)init;
- (void)dealloc;

@end
