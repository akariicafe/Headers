@class NSString, _IDSGroupSession;

@interface IDSGroupSession : NSObject {
    _IDSGroupSession *_internal;
}

@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) unsigned int sessionEndedReason;

+ (void)requestNWConnectionforIDSGroupSessionUnicastParameter:(id)a0 withCompletionHandler:(id /* block */)a1;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)setPreferences:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAccount:(id)a0 options:(id)a1;
- (unsigned int)state;
- (id)_internal;
- (void)invalidate;
- (void)joinWithOptions:(id)a0;
- (id)_internal_sessionWithValidityCheck;
- (void)updateMembers:(id)a0 withContext:(id)a1 triggeredLocally:(BOOL)a2;
- (void)updateParticipantData:(id)a0 withContext:(id)a1;
- (void)setParticipantInfo:(id)a0;
- (void)leaveGroupSession;
- (void)requestActiveParticipants;
- (id)initWithAccount:(id)a0 destinations:(id)a1 options:(id)a2;
- (id)unicastParameterForParticipantID:(unsigned long long)a0 dataMode:(long long)a1 connectionIndex:(unsigned long long)a2;

@end
