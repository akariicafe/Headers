@class NSString, NSDate, _CDPerfMetricFamily;

@interface _CDPerfMetric : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _count;
    double _lastElapsedTime;
    double _minimumElapsedTime;
    double _maximumElapsedTime;
    double _lastUpdateTime;
    unsigned long long _lastResultCount;
    unsigned long long _errorCount;
}

@property (readonly, weak) _CDPerfMetricFamily *family;
@property (readonly) NSString *name;
@property (readonly) NSString *string;
@property (readonly) unsigned long long count;
@property (readonly) NSDate *lastUpdate;
@property (readonly) double lastElapsedTime;
@property (readonly) double totalElapsedTime;
@property (readonly) double minimumElapsedTime;
@property (readonly) double maximumElapsedTime;
@property (readonly) double averageElapsedTime;
@property (readonly) unsigned long long lastResultCount;
@property (readonly) unsigned long long errorCount;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 string:(id)a1 family:(id)a2;

@end
