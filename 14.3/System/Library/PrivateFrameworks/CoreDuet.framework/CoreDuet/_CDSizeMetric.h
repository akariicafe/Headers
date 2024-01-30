@class NSString, _CDSizeMetricFamily, NSDate;

@interface _CDSizeMetric : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _scale;
    unsigned long long _count;
    unsigned long long _firstSize;
    unsigned long long _lastSize;
    unsigned long long _minimumSize;
    unsigned long long _maximumSize;
    unsigned long long _totalSizes;
    NSDate *_firstUpdate;
    NSDate *_lastUpdate;
    NSString *_name;
    NSString *_string;
    _CDSizeMetricFamily *_family;
}

- (void).cxx_destruct;
- (id)initWithName:(id)a0 string:(id)a1 scale:(unsigned long long)a2 family:(id)a3;

@end
