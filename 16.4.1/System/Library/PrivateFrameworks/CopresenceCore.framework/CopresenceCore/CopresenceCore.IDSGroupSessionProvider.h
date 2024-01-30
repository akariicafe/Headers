@class NSString;

@interface CopresenceCore.IDSGroupSessionProvider : NSObject <IDSGroupSessionDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ groupID;
    void /* unknown type, empty encoding */ members;
    void /* unknown type, empty encoding */ localMember;
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ groupSession;
    void /* unknown type, empty encoding */ participantIdentifier;
    void /* unknown type, empty encoding */ virtualParticipant;
    void /* unknown type, empty encoding */ participants;
    void /* unknown type, empty encoding */ abcReporter;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic, readonly) NSString *description;

- (void)groupSessionDidTerminate:(id)a0;
- (void)groupSessionEnded:(id)a0 withReason:(unsigned int)a1 error:(id)a2;
- (void)session:(id)a0 didReceiveActiveLightweightParticipants:(id)a1 success:(BOOL)a2;
- (void)session:(id)a0 didRegisterPluginAllocationInfo:(id)a1;
- (void)session:(id)a0 didUnregisterPluginAllocationInfo:(id)a1;
- (void)session:(id)a0 participantDidJoinGroupWithInfo:(id)a1;
- (void)session:(id)a0 participantDidLeaveGroupWithInfo:(id)a1;
- (void)sessionDidJoinGroup:(id)a0 participantUpdate:(id)a1 error:(id)a2;
- (void)sessionDidLeaveGroup:(id)a0 error:(id)a1;
- (void)sessiondidReceiveKeyUpdate:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
