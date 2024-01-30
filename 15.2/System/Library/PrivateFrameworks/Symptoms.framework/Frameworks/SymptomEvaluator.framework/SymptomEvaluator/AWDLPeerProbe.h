@class NSArray, NSMutableDictionary;
@protocol AWDLPeerProbeDelegate;

@interface AWDLPeerProbe : TestProbe

@property (retain, nonatomic) NSArray *servicesOfInterest;
@property (retain) id<AWDLPeerProbeDelegate> delegate;
@property unsigned long long pollCount;
@property (retain) NSMutableDictionary *peerList;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopTest;
- (void)periodicTimerFired:(id)a0;
- (void)startAWDLPeerPollingForServices:(id)a0 withCount:(unsigned long long)a1 interval:(unsigned long long)a2;

@end
