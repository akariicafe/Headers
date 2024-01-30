@class NSString, NSMutableDictionary;

@interface CDPCAReporter : NSObject {
    NSString *_eventName;
    NSMutableDictionary *_reportData;
    unsigned long long _initTime;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _clock_timebase;
}

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)sendReport;
- (double)machAbsoluteTimeToTimeInterval:(unsigned long long)a0;

@end
