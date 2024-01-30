@class DSSessionMetric;

@interface DSCoreAnalyticsEventHandler : NSObject {
    DSSessionMetric *_sessionMetric;
}

- (id)init;
- (void).cxx_destruct;
- (void)dsFirstListenerSessionSetUnsuccessful;
- (void)dsProviderAvailable;
- (void)dsProviderUnavailable;
- (void)dsSessionCompletedWithStopReason:(int)a0 numHeartbeats:(unsigned long long)a1 numMotionStateMessages:(unsigned long long)a2 activeProviderLostCount:(unsigned long long)a3 dataLinkType:(int)a4 maxListenerClients:(unsigned long long)a5 avgListenerStartInterval:(double)a6;
- (void)dsSessionStartedWithDeviceRole:(int)a0 numPotentialProviders:(unsigned long long)a1 unterminatedSession:(BOOL)a2;

@end
