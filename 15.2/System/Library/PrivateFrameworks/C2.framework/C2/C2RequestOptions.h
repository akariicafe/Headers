@class NSString, NSURL, NSObject, C2MetricOptions;
@protocol C2NetworkingDelegate;

@interface C2RequestOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasAllowsCellularAccess;
@property (copy, nonatomic) NSString *originalHost;
@property (nonatomic) BOOL metricRequest;
@property (readonly, nonatomic) double emptySessionExpiryInSeconds;
@property (readonly, nonatomic) double taskCallbackConsideredHangInSeconds;
@property (readonly, nonatomic) BOOL outOfProcess;
@property (copy, nonatomic) id /* block */ testBehavior_sessionGroupCreated;
@property (copy, nonatomic) NSURL *invokedURL;
@property (weak, nonatomic) NSObject<C2NetworkingDelegate> *networkingDelegate;
@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) NSString *outOfProcessPoolName;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL _allowsExpensiveAccess;
@property (nonatomic) BOOL _allowsPowerNapScheduling;
@property (nonatomic) double _timeoutIntervalForRequest;
@property (nonatomic) double _timeoutIntervalForResource;
@property (copy, nonatomic) NSString *_sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *_sourceApplicationSecondaryIdentifier;
@property (copy, nonatomic) NSString *_appleIDContextSessionIdentifier;
@property (nonatomic) BOOL tlsPinning;
@property (nonatomic) BOOL allowRouting;
@property (nonatomic) BOOL allowExpiredDNSBehavior;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (nonatomic) unsigned long long duetPreClearedMode;
@property (nonatomic) BOOL _allowsRetryForBackgroundDataTasks;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) C2MetricOptions *metricOptions;
@property (nonatomic) BOOL redactRemoteEndpointFromNetworkMetrics;
@property (nonatomic) BOOL redactUniformResourceIdentifierFromNetworkMetrics;
@property (nonatomic) BOOL useAdaptiveTimeouts;
@property (nonatomic) BOOL outOfProcessDiscretionary;
@property (copy, nonatomic) NSURL *c2MetricsEndpoint;
@property (nonatomic) unsigned long long c2MetricsReportFrequency;
@property (nonatomic) unsigned long long c2MetricsReportFrequencyBase;

+ (void)initialize;
+ (id)stringForQualityOfService:(long long)a0;
+ (id)stringForDiscretionaryNetworkBehavior:(unsigned long long)a0;
+ (BOOL)triesteMetricsEnabled;
+ (id)stringForDuetPreClearedMode:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (void)setOutOfProcess:(BOOL)a0;
- (id)defaultSessionConfigurationWithName:(id)a0;
- (id)decorateTask:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)sessionConfigurationNameWithRouteHost:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sessionConfigurationWithName:(id)a0;
- (id)copyAndDecorateRequest:(id)a0;
- (unsigned long long)hash;

@end
