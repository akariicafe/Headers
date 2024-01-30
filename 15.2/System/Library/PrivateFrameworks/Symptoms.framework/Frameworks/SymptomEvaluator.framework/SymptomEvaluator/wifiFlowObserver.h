@class NSString, ManagedEventHandler, NSDate;

@interface wifiFlowObserver : NSObject <flowDispositionObserver> {
    struct wifiPropertyCounts { unsigned int classCounter[32]; unsigned int classFlags; unsigned int everSetClassFlags; unsigned int everReportedClassFlags; unsigned int lastReportedClassFlags; unsigned int latencyPropertyCounter[8]; unsigned int jitterPropertyCounter[8]; unsigned int lossTolerancePropertyCounter[8]; unsigned int durationPropertyCounter[8]; unsigned int requiredBandwidthPropertyCounter[8]; unsigned int preferredBandwidthPropertyCounter[8]; unsigned long long currentCombinedFlags; unsigned long long lastReportedCombinedFlags; unsigned long long everSetCombinedFlags; unsigned long long everReportedCombinedFlags; } _foregroundCounts;
    struct wifiPropertyCounts { unsigned int classCounter[32]; unsigned int classFlags; unsigned int everSetClassFlags; unsigned int everReportedClassFlags; unsigned int lastReportedClassFlags; unsigned int latencyPropertyCounter[8]; unsigned int jitterPropertyCounter[8]; unsigned int lossTolerancePropertyCounter[8]; unsigned int durationPropertyCounter[8]; unsigned int requiredBandwidthPropertyCounter[8]; unsigned int preferredBandwidthPropertyCounter[8]; unsigned long long currentCombinedFlags; unsigned long long lastReportedCombinedFlags; unsigned long long everSetCombinedFlags; unsigned long long everReportedCombinedFlags; } _backgroundCounts;
    unsigned int _dampeningMsecs;
    NSDate *_lastReportTimestamp;
    BOOL _dampening;
    unsigned int _seqno;
    ManagedEventHandler *_managedEventHandler;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL foreground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)noteForegroundState:(BOOL)a0 forApp:(id)a1 hasForegroundApps:(BOOL)a2;
- (BOOL)removeClassification:(id)a0 context:(struct wifiPropertyCounts { unsigned int x0[32]; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5[8]; unsigned int x6[8]; unsigned int x7[8]; unsigned int x8[8]; unsigned int x9[8]; unsigned int x10[8]; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; } *)a1;
- (void).cxx_destruct;
- (id)infoDir;
- (void)configurePolicies:(id)a0;
- (id)init;
- (BOOL)addClassification:(id)a0 context:(struct wifiPropertyCounts { unsigned int x0[32]; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5[8]; unsigned int x6[8]; unsigned int x7[8]; unsigned int x8[8]; unsigned int x9[8]; unsigned int x10[8]; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; } *)a1;
- (void)_noteNewUsage;
- (unsigned int)noteFlow:(id)a0 snapshot:(id)a1 present:(BOOL)a2 trackedBy:(id)a3;

@end
