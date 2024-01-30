@class NSNumber, NSMutableDictionary, NSString;

@interface SSMetricsMutableEvent : SSMetricsEvent <NSMutableCopying>

@property (readonly, copy, nonatomic) NSMutableDictionary *bodyDictionary;
@property (retain, nonatomic) NSNumber *accountIdentifier;
@property (retain, nonatomic) NSString *connection;
@property (retain, nonatomic) NSString *eventType;
@property double originalTime;
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSNumber *baseVersion;
@property (retain, nonatomic) NSNumber *eventVersion;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSNumber *clientVersion;
@property (retain, nonatomic) NSString *hostApplicationIdentifier;
@property (retain, nonatomic) NSNumber *previousClientVersion;
@property (retain, nonatomic) NSString *userAgent;
@property (nonatomic) BOOL shouldSuppressUserInfo;
@property (nonatomic) BOOL shouldSuppressDSIDHeader;
@property (retain, nonatomic) NSString *canaryIdentifier;

- (id)propertyForBodyKey:(id)a0;
- (void)setProperty:(id)a0 forBodyKey:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)decorateReportingURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appendPropertiesToBody:(id)a0;
- (id)initWithBodyDictionary:(id)a0;
- (void)setOriginalTimeUsingDate:(id)a0;
- (void)addPropertiesWithDictionary:(id)a0;
- (id)debugDescription;

@end
