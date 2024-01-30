@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCMediaStreamManager : NSObject <VCMediaStreamDelegate> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } stateLock;
    NSMutableArray *streamArray;
    NSObject<OS_dispatch_queue> *xpcQueue;
    NSMutableDictionary *_vcMomentsCollectorDictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;
+ (void)addNSError:(id)a0 toXPCArgumentDictionary:(id)a1;

- (id)allocWithZone:(struct _NSZone { } *)a0;
- (void)vcMediaStreamDidRTPTimeOut:(id)a0;
- (id)init;
- (void)vcMediaStreamDidInterruptionEnd:(id)a0;
- (void)pauseStreams:(BOOL)a0;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)registerBlocksForService;
- (void)dealloc;
- (void)vcMediaStream:(id)a0 didUpdateVideoConfiguration:(BOOL)a1 error:(id)a2 dictionary:(id)a3;
- (unsigned long long)retainCount;
- (void)vcMediaStream:(id)a0 updateFrequencyLevel:(id)a1 isInputMeter:(BOOL)a2;
- (void)vcMediaStreamDidRTCPTimeOut:(id)a0;
- (void)vcMediaStream:(id)a0 downlinkQualityDidChange:(id)a1;
- (void)deregisterBlocksForService;
- (void)vcMediaStream:(id)a0 didReceiveRTCPPackets:(id)a1;
- (void)vcMediaStreamDidStop:(id)a0;
- (id)retain;
- (id)textStreamWithStreamToken:(long long)a0;
- (void)vcMediaStream:(id)a0 didPauseStream:(BOOL)a1 error:(id)a2;
- (void)vcMediaStream:(id)a0 didStartStream:(BOOL)a1 error:(id)a2;
- (void)vcMediaStream:(id)a0 didReceiveText:(id)a1;
- (void)vcMediaStreamDidInterruptionBegin:(id)a0;
- (void)vcMediaStream:(id)a0 didReceiveTTYCharacter:(unsigned short)a1;
- (void)vcMediaStream:(id)a0 uplinkQualityDidChange:(id)a1;
- (void)vcMediaStream:(id)a0 didReceiveDTMFEventWithDigit:(char)a1;
- (void)vcMediaStream:(id)a0 didResumeStream:(BOOL)a1 error:(id)a2;

@end
