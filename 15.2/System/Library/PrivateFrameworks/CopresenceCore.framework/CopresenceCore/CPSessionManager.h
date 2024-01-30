@class NSString, NSMutableDictionary;
@protocol CPSessionManagerDelegate;

@interface CPSessionManager : NSObject {
    NSString *_selfUserCreatedSessionID;
    NSString *_activeSessionID;
    NSMutableDictionary *_sessions;
}

@property (copy, nonatomic) NSString *selfAccountID;
@property (weak, nonatomic) id<CPSessionManagerDelegate> delegate;

- (id)initWithAccountID:(id)a0;
- (void).cxx_destruct;
- (id)activeSession;
- (id)_simpleDescription;
- (void)_attemptGarbageCollectSession:(id)a0;
- (void)_applySessionMemberStateUpdate:(id)a0 accountID:(id)a1 state:(unsigned char)a2 checkGC:(BOOL)a3;
- (id)sessionInviteFor:(id)a0;
- (id)selfCreatedSession:(id)a0 inviteeAccountIDs:(id)a1;
- (void)selfLeftSession:(id)a0;
- (void)selfAcceptedSession:(id)a0;
- (void)selfSentInvitesFor:(id)a0 toInviteeAccountIDs:(id)a1;
- (void)receivedInviteForSession:(id)a0 invitedByAccountID:(id)a1 withInviteeAccountIDs:(id)a2;
- (void)applySessionMemberStateUpdate:(id)a0 accountID:(id)a1 state:(unsigned char)a2;
- (id)listReceivedSessionInvites;

@end
