@class NSMutableDictionary;

@interface GKVoiceChatDictionary : NSObject {
    NSMutableDictionary *actualDictionary;
    unsigned long long type;
    unsigned int orignalCallID;
}

@property unsigned int callID;
@property (readonly) unsigned int originalCallID;
@property long long nonce;

+ (BOOL)validateDictionary:(id)a0;
+ (BOOL)validateInvite:(id)a0;
+ (BOOL)validateReply:(id)a0;
+ (BOOL)validateCancel:(id)a0;
+ (BOOL)validateFocus:(id)a0;
+ (id)inviteDictionaryToParticipantID:(id)a0 fromParticipantID:(id)a1 connectionData:(id)a2 callID:(unsigned int)a3 focus:(BOOL)a4;
+ (id)dictionaryFromData:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)response;
- (id)version;
- (id)description;
- (id)participantID;
- (id)initWithCoder:(id)a0;
- (BOOL)isFocus;
- (void)setFocus:(BOOL)a0;
- (unsigned long long)type;
- (void)dealloc;
- (id)connectionData;
- (id)fromParticipantID;
- (id)remoteVCPartyID;
- (id)localVCPartyID;
- (BOOL)matchesNonce:(long long)a0;
- (id)replyDictionary:(unsigned long long)a0 connectionData:(id)a1 callID:(unsigned int)a2 focus:(BOOL)a3;
- (id)cancelDictionary;
- (id)focusDictionary:(BOOL)a0;
- (BOOL)isInviteDictionary;
- (BOOL)isCancelDictionary;
- (BOOL)isReplyDictionary;
- (BOOL)isFocusDictionary;
- (BOOL)matchesResponse:(id)a0;
- (void)setFromParticipantID:(id)a0;
- (id)createBlob;
- (id)setLocalVCPartyID:(id)a0;
- (id)setRemoteVCPartyID:(id)a0;

@end
