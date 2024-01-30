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

+ (void)addNSError:(id)a0 toXPCArgumentDictionary:(id)a1;
+ (id)defaultManager;

- (void)vcMediaStream:(id)a0 didReceiveDTMFEventWithDigit:(char)a1;
- (void)vcMediaStream:(id)a0 didReceiveText:(id)a1;
- (void)vcMediaStreamDidInterruptionBegin:(id)a0;
- (void)vcMediaStreamDidRTCPTimeOut:(id)a0;
- (void)vcMediaStream:(id)a0 updateFrequencyLevel:(id)a1 isInputMeter:(BOOL)a2;
- (void)vcMediaStreamDidRTPTimeOut:(id)a0;
- (void)vcMediaStreamDidInterruptionEnd:(id)a0;
- (unsigned long long)retainCount;
- (void)vcMediaStream:(id)a0 didUpdateVideoConfiguration:(BOOL)a1 error:(id)a2 dictionary:(id)a3;
- (id)retain;
- (id)textStreamWithStreamToken:(long long)a0;
- (void)vcMediaStream:(id)a0 didReceiveTTYCharacter:(unsigned short)a1;
- (id)allocWithZone:(struct _NSZone { } *)a0;
- (void)vcMediaStream:(id)a0 uplinkQualityDidChange:(id)a1;
- (id)autorelease;
- (void)deregisterBlocksForService;
- (id)init;
- (void)pauseStreams:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)vcMediaStream:(id)a0 didReceiveRTCPPackets:(id)a1;
- (void)registerBlocksForService;
- (void)dealloc;
- (oneway void)release;
- (void)vcMediaStream:(id)a0 downlinkQualityDidChange:(id)a1;

@end
