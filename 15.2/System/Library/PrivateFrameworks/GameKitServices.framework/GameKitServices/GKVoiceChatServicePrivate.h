@class GKVoiceChatDictionary, NSRecursiveLock, GKVoiceChatService, NSLock, VideoConference;
@protocol GKVoiceChatClient;

@interface GKVoiceChatServicePrivate : NSObject <VideoConferenceDelegate> {
    BOOL microphoneMuted;
    unsigned int curCallID;
    GKVoiceChatDictionary *incomingCallDict;
    GKVoiceChatDictionary *outgoingCallDict;
    struct tagCONNRESULT { unsigned int dwCallID; int iResultCount; int iRole; unsigned int dwRemoteCallID; int proto; int bIfRelay; unsigned short wRelayServType; unsigned short wChannelNumber; struct tagIPPORT { int iFlags; char szIfName[16]; union { unsigned int dwIPv4; unsigned char abIPv6[16]; } IP; unsigned short wPort; } mbLocal; struct tagIPPORT { int iFlags; char szIfName[16]; union { unsigned int dwIPv4; unsigned char abIPv6[16]; } IP; unsigned short wPort; } mbRemote; struct tagIPPORT { int iFlags; char szIfName[16]; union { unsigned int dwIPv4; unsigned char abIPv6[16]; } IP; unsigned short wPort; } mbSrc; struct tagIPPORT { int iFlags; char szIfName[16]; union { unsigned int dwIPv4; unsigned char abIPv6[16]; } IP; unsigned short wPort; } mbDst; struct tagIPPORT { int iFlags; char szIfName[16]; union { unsigned int dwIPv4; unsigned char abIPv6[16]; } IP; unsigned short wPort; } mbRemoteSrc; struct tagIPPORT { int iFlags; char szIfName[16]; union { unsigned int dwIPv4; unsigned char abIPv6[16]; } IP; unsigned short wPort; } mbRelayExt; unsigned int dwRTT; int bIfLocalCellularQoS; int bIfRemoteCellularQoS; int iLocalCellTech; int iRemoteCellTech; unsigned short wCellularMTU; int bIfUpgrade; int bIfPrimary; int bIfReplaceOnly; struct tagCONNRESULT *next; int channelID; } currentConnResult;
    NSRecursiveLock *stateLock;
    NSLock *clientLock;
    BOOL forceNoICE;
    VideoConference *conf;
}

@property int state;
@property int chatMode;
@property GKVoiceChatService *wrapperService;
@property (nonatomic) id<GKVoiceChatClient> client;
@property (getter=isMicrophoneMuted) BOOL microphoneMuted;
@property float remoteParticipantVolume;
@property (getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property (getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property (readonly, nonatomic) float outputMeterLevel;
@property (readonly, nonatomic) float inputMeterLevel;
@property (getter=isFocus) BOOL focus;
@property (nonatomic) void *localVideoLayer;
@property (nonatomic) void *remoteVideoLayer;
@property (readonly) double localFramerate;
@property (readonly) double localBitrate;
@property (readonly) double remoteFramerate;
@property (readonly) double remoteBitrate;
@property (readonly, nonatomic) long long outputAudioPowerSpectrumToken;

+ (id)defaultVoiceChatService;

- (void)resetState;
- (void)cleanup;
- (id)init;
- (void)videoConference:(id)a0 didStartSession:(BOOL)a1 withCallID:(unsigned int)a2 error:(id)a3;
- (void)dealloc;
- (BOOL)startVoiceChatWithParticipantID:(id)a0 error:(id *)a1;
- (void)stopVoiceChatWithParticipantID:(id)a0;
- (BOOL)acceptCallID:(unsigned int)a0 error:(id *)a1;
- (void)denyCallID:(unsigned int)a0;
- (void)receivedData:(id)a0 fromParticipantID:(id)a1;
- (void)videoConference:(id)a0 didStopWithCallID:(unsigned int)a1 error:(id)a2;
- (void)forceNoICE:(BOOL)a0;
- (BOOL)getNSError:(id *)a0 code:(long long)a1 description:(id)a2 reason:(id)a3;
- (id)createInvite:(id *)a0 toParticipant:(id)a1 callID:(unsigned int *)a2;
- (id)createReplyUsingDictionary:(id)a0 replyCode:(unsigned long long)a1 error:(id *)a2;
- (int)startICEConnectionCheck:(id)a0 isCaller:(BOOL)a1 withCallID:(unsigned int)a2;
- (void)informClientVoiceChatDidNotStart:(id)a0;
- (void)informClientOfInviteFromParticipant:(id)a0;
- (void)informClientVoiceChatDidStart:(id)a0;
- (void)informClientVoiceChatDidStop:(id)a0;
- (void)stopVoiceChatProc:(id)a0;
- (id)localDisplayNameForCallID:(unsigned int)a0;
- (id)remoteDisplayNameForCallID:(unsigned int)a0;
- (int)startICEConnectionCheck:(id)a0 isCaller:(BOOL)a1;
- (void)informClientVoiceChatDidStartMainSelector:(id)a0;
- (void)informClientVoiceChatDidNotStartMainSelector:(id)a0;
- (BOOL)inviteIsValid:(id)a0;
- (BOOL)getNSError:(id *)a0 code:(long long)a1 description:(id)a2 hResult:(int)a3;

@end
