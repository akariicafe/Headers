@class NSString;

@interface SSMetricsLogEvent : SSMetricsMutableEvent

@property (nonatomic) unsigned long long logLevel;
@property (retain, nonatomic) NSString *logSubsystem;
@property (retain, nonatomic) NSString *message;

+ (unsigned long long)_logLevelFromString:(id)a0;
+ (id)_stringFromLogLevel:(unsigned long long)a0;

- (id)init;
- (id)description;

@end
