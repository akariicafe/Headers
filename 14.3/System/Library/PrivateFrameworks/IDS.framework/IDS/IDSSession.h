@class NSString, _IDSSession;

@interface IDSSession : NSObject {
    _IDSSession *_internal;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _uniqueIDLock;
}

@property (retain, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) int socket;
@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) NSString *destination;
@property (nonatomic) BOOL isAudioEnabled;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) long long invitationTimeOut;
@property (readonly, nonatomic) unsigned int sessionEndedReason;

- (void)endSession;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (unsigned long long)initialLinkType;
- (void)sendInvitationWithData:(id)a0 declineOnError:(BOOL)a1;
- (void)sendInvitationWithOptions:(id)a0;
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)a0;
- (void)cancelInvitationWithData:(id)a0;
- (void)acceptInvitationWithData:(id)a0;
- (void)declineInvitationWithData:(id)a0;
- (void)cancelInvitation;
- (void)acceptInvitation;
- (void)declineInvitation;
- (void)endSessionWithData:(id)a0;
- (void)sendSessionMessage:(id)a0;
- (void)sendSessionMessage:(id)a0 toDestinations:(id)a1;
- (void)sendAllocationRequest:(id)a0;
- (BOOL)sendData:(id)a0 error:(id *)a1;
- (void)reconnectSession;
- (BOOL)shouldUseSocketForTransport;
- (unsigned long long)MTUForAddressFamily:(unsigned long long)a0;
- (void)sendInvitation;
- (id)initWithAccount:(id)a0 destinations:(id)a1 transportType:(long long)a2;
- (id)_initWithAccount:(id)a0 destinations:(id)a1 transportType:(long long)a2 uniqueID:(id)a3;
- (void)sendInvitationWithData:(id)a0;
- (void)setStreamPreferences:(id)a0;
- (id)_streamPreferences;
- (void)setPreferences:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (unsigned int)state;
- (id)_internal;
- (id)initWithAccount:(id)a0 destinations:(id)a1 options:(id)a2;

@end
