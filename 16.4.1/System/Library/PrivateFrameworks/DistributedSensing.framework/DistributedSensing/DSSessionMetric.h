@class NSString, NSDate;

@interface DSSessionMetric : NSObject {
    NSDate *_sessionStartTime;
    double _sessionDuration;
    NSDate *_providerAvailableStartTime;
    double _totalProviderAvailableDuration;
    int _sessionStopReason;
    int _deviceRole;
    int _linkType;
    unsigned long long _numPotentialProviders;
    unsigned long long _numHeartbeats;
    unsigned long long _numMotionStateMessages;
    unsigned long long _activeProviderLostCount;
    unsigned long long _providerAvailability;
    unsigned long long _maxListenerClients;
    double _avgListenerStartInterval;
    BOOL _unterminatedSession;
    BOOL _isSessionStartUnsuccessful;
}

@property (retain, nonatomic) NSString *eventName;

- (id)init;
- (void).cxx_destruct;
- (void)dsFirstListenerSessionSetUnsuccessful;
- (void)dsProviderAvailable;
- (void)dsProviderUnavailable;
- (void)dsSessionCompletedWithStopReason:(int)a0 numHeartbeats:(unsigned long long)a1 numMotionStateMessages:(unsigned long long)a2 activeProviderLostCount:(unsigned long long)a3 dataLinkType:(int)a4 maxListenerClients:(unsigned long long)a5 avgListenerStartInterval:(double)a6;
- (void)dsSessionStartedWithDeviceRole:(int)a0 numPotentialProviders:(unsigned long long)a1 unterminatedSession:(BOOL)a2;
- (id)sessionMetricFinalize;

@end
