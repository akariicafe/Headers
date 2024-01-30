@class VMVoicemailManager;

@interface VMLegacyAccount : NSObject

@property (retain, nonatomic) VMVoicemailManager *voicemailManager;

- (id)voicemailWithIdentifier:(unsigned long long)a0;
- (BOOL)isSubscribed;
- (void)synchronize:(BOOL)a0;
- (BOOL)isMessageWaiting;
- (unsigned int)unreadCount;
- (id)init;
- (BOOL)isOnline;
- (void).cxx_destruct;
- (id)allVoicemailsWithFlags:(unsigned long long)a0 withoutFlags:(unsigned long long)a1;
- (BOOL)greetingAvailable;
- (void)handlePasswordNotificationResponse:(id)a0;
- (BOOL)isOfflineDueToRoaming;
- (int)mailboxUsage;
- (void)moveVoicemailFromTrash:(id)a0;
- (void)moveVoicemailToTrash:(id)a0;
- (unsigned int)recentUnreadCount;
- (void)setGreetingType:(long long)a0 withData:(id)a1 duration:(unsigned int)a2;
- (void)setProvisionalPassword:(id)a0;

@end
