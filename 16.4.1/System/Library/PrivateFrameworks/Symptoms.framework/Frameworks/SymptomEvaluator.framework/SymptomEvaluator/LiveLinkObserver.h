@class NSString, NSDate, NSObject, TCPProgressProbe;
@protocol OS_dispatch_source;

@interface LiveLinkObserver : NSObject {
    int notifyToken;
    TCPProgressProbe *_tcpProgressProbe;
    NSDate *_timeOfProbeStart;
    NSObject<OS_dispatch_source> *progressProbeTimer;
    unsigned long long _iter;
    BOOL _localFlowsDisabled;
    BOOL _localFlowsEnabled;
}

@property (readonly, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) unsigned long long tcpProgressScore;
@property (readonly, nonatomic) BOOL premiumModeEnabled;

- (id)initWithInterfaceName:(id)a0;
- (void)postHasAdviceNotification:(BOOL)a0;
- (unsigned long long)_assessProgressFromBaseline:(struct xtcpprogress_indicators { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; } *)a0 toMetrics:(struct xtcpprogress_indicators { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; } *)a1;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)stopTracking;
- (BOOL)startTracking;
- (void)_captureProgressWithInterval:(unsigned long long)a0 capWindowTo:(unsigned long long)a1;
- (BOOL)attemptStartProgressProbe;
- (BOOL)disableLocalFlowsTracking;
- (void)disablePremiumMode;
- (BOOL)enableLocalFlowsTracking;
- (void)enablePremiumMode;
- (void)startProgressProbeTimerWithInterval:(unsigned long long)a0 capWindowTo:(unsigned long long)a1;
- (void)stopProgressProbeTimer;

@end
