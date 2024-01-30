@class NSString;

@interface SSMetricsEvent : NSObject

@property (readonly, retain, nonatomic) NSString *eventType;
@property (readonly, nonatomic) BOOL shouldSuppressUserInfo;
@property (readonly, nonatomic) BOOL shouldSuppressDSIDHeader;

+ (id)_globalCanaryLock;
+ (id)globalEventCanary;
+ (void)setGlobalEventCanary:(id)a0;

- (BOOL)isBlacklistedByConfiguration:(id)a0;
- (id)allTableEntityPropertiesPermittedByConfiguration:(id)a0 externalValues:(id)a1;
- (id)decorateReportingURL:(id)a0;
- (BOOL)requiresDiagnosticSendingPermission;
- (void).cxx_destruct;
- (double)timeIntervalFromMilliseconds:(id)a0;
- (id)millisecondsFromTimeInterval:(double)a0;
- (BOOL)isFieldBlacklistEnabled;
- (id)_dictionaryRepresentationOfBody;
- (void)appendPropertiesToBody:(id)a0;
- (id)allTableEntityPropertiesPermittedByConfiguration:(id)a0;

@end
