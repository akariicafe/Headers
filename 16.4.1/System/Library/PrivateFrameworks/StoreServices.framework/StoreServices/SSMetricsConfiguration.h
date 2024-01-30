@class NSSet, NSDictionary, NSMutableSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SSMetricsConfiguration : NSObject {
    NSSet *_blacklistedEvents;
    NSDictionary *_config;
    BOOL _disabled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_cookieFieldsUnion;
    NSMutableDictionary *_eventFieldsUnion;
    NSDictionary *_fields;
    int _internalSettingsToken;
    id _reportingFrequencyOverride;
    BOOL _sendDisabled;
}

@property (readonly, nonatomic) NSDictionary *fieldsMap;
@property (retain, nonatomic) SSMetricsConfiguration *childConfiguration;
@property (nonatomic) BOOL disableEventDecoration;

+ (void)getReportingFrequencyOverrideWithCompletionBlock:(id /* block */)a0;
+ (void)setReportingFrequencyOverride:(id)a0;
+ (id)_reportingFrequencyOverride;

- (BOOL)_decorateITMLEvents;
- (id)compoundStringWithElements:(id)a0;
- (id)blacklistedEventFields;
- (BOOL)_configBooleanForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)_initSSMetricsEventConfiguration;
- (id)valueForConfigurationKey:(id)a0;
- (BOOL)isSendDisabled;
- (id)reportingURLString;
- (BOOL)isEventTypeBlacklisted:(id)a0;
- (void)dealloc;
- (id)tokenStringWithElements:(id)a0;
- (id)initWithStorePlatformData:(id)a0;
- (id)initWithGlobalConfiguration:(id)a0;
- (void)_setReportingFrequencyOverride:(id)a0;
- (id)cookieFields;
- (double)reportingFrequency;
- (BOOL)isDisabled;
- (id)pingURLs;
- (void).cxx_destruct;
- (id)eventFields;

@end
