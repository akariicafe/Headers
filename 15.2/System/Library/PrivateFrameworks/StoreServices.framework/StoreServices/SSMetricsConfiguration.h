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

+ (void)setReportingFrequencyOverride:(id)a0;
+ (void)getReportingFrequencyOverrideWithCompletionBlock:(id /* block */)a0;
+ (id)_reportingFrequencyOverride;

- (BOOL)isDisabled;
- (void)_setReportingFrequencyOverride:(id)a0;
- (id)reportingURLString;
- (id)eventFields;
- (BOOL)_configBooleanForKey:(id)a0 defaultValue:(BOOL)a1;
- (BOOL)isSendDisabled;
- (id)pingURLs;
- (void).cxx_destruct;
- (id)valueForConfigurationKey:(id)a0;
- (id)initWithGlobalConfiguration:(id)a0;
- (id)compoundStringWithElements:(id)a0;
- (id)blacklistedEventFields;
- (id)initWithStorePlatformData:(id)a0;
- (double)reportingFrequency;
- (BOOL)_decorateITMLEvents;
- (void)dealloc;
- (id)cookieFields;
- (id)tokenStringWithElements:(id)a0;
- (id)_initSSMetricsEventConfiguration;
- (BOOL)isEventTypeBlacklisted:(id)a0;

@end
