@class VMVoicemailManager;

@interface VMLegacyAccount : NSObject

@property (retain, nonatomic) VMVoicemailManager *voicemailManager;

- (BOOL)isSubscribed;
- (BOOL)isMessageWaiting;
- (id)voicemailWithIdentifier:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned int)unreadCount;
- (void)synchronize:(BOOL)a0;
- (BOOL)isOnline;
- (unsigned int)recentUnreadCount;
- (void)handlePasswordNotificationResponse:(id)a0;
- (BOOL)isOfflineDueToRoaming;
- (int)mailboxUsage;
- (BOOL)greetingAvailable;
- (void)setGreetingType:(long long)a0 withData:(id)a1 duration:(unsigned int)a2;
- (void)setProvisionalPassword:(id)a0;
- (void)moveVoicemailToTrash:(id)a0;
- (void)moveVoicemailFromTrash:(id)a0;
- (id)allVoicemailsWithFlags:(unsigned long long)a0 withoutFlags:(unsigned long long)a1;

@end
