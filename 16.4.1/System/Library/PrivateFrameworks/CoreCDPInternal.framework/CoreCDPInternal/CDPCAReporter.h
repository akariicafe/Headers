@class NSString, NSMutableDictionary;

@interface CDPCAReporter : NSObject {
    NSString *_eventName;
    NSMutableDictionary *_reportData;
    unsigned long long _initTime;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _clock_timebase;
}

- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithEvent:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)debugDescription;
- (void).cxx_destruct;
- (double)machAbsoluteTimeToTimeInterval:(unsigned long long)a0;
- (void)sendReport;
- (id)__eventNameForTesting;
- (void)_sendEvent;
- (void)populateUnderlyingErrorsStartingWithRootError:(id)a0 maxDepth:(unsigned int)a1;
- (void)populateUnderlyingErrorsStartingWithRootError:(id)a0 maxDepth:(unsigned int)a1 domainAllowlist:(id)a2;
- (void)populateUnderlyingErrorsStartingWithRootError:(id)a0 maxDepth:(unsigned int)a1 topLevelErrorCodeKey:(id)a2 topLevelErrorDomainKey:(id)a3 errorCodePrefix:(id)a4 errorDomainPrefix:(id)a5 domainAllowlist:(id)a6;

@end
