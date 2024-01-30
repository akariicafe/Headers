@class SHSession, SHAudioMatchingRemoteStore, NSString;

@interface WFShazamMediaAction : WFAction <SHSessionDelegate>

@property (retain, nonatomic) SHSession *session;
@property (retain, nonatomic) SHAudioMatchingRemoteStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userInterfaceProtocol;

- (void).cxx_destruct;
- (void)session:(id)a0 didNotFindMatchForSignature:(id)a1 error:(id)a2;
- (void)session:(id)a0 didFindMatch:(id)a1;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)finishRunningWithError:(id)a0;
- (void)startShazam;
- (void)finishRunningWithMatch:(id)a0 error:(id)a1;

@end
