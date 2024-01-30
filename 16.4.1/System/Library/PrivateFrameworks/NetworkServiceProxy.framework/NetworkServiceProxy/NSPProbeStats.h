@class NSString;

@interface NSPProbeStats : NSPProxyAnalytics

@property (retain, nonatomic) NSString *tierType;
@property (nonatomic) long long probeReason;
@property (retain, nonatomic) NSString *probeInterface;
@property (nonatomic) unsigned long long probeDurationSec;
@property (nonatomic) unsigned long long proxyProbeCount;
@property (nonatomic) unsigned long long proxyProbeSuccessCount;
@property (nonatomic) unsigned long long proxyProbeFailedCount;
@property (nonatomic) unsigned long long proxyProbeRedirectedCount;
@property (nonatomic) unsigned long long proxyProbeServerErrorCount;
@property (nonatomic) unsigned long long directProbeCount;
@property (nonatomic) unsigned long long directProbeSuccessCount;
@property (nonatomic) unsigned long long directProbeFailedCount;
@property (nonatomic) unsigned long long directProbeRedirectedCount;
@property (nonatomic) unsigned long long directProbeServerErrorCount;

- (id)eventName;
- (id)analyticsDict;
- (void).cxx_destruct;
- (id)probeReasonToString;

@end
