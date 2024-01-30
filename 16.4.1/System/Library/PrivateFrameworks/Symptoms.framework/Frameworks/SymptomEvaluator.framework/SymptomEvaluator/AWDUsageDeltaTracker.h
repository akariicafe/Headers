@interface AWDUsageDeltaTracker : NSObject {
    int netType;
    int rootCause;
    unsigned long long startValue;
    unsigned long long lastValue;
    unsigned long long flowCount;
}

- (void)dealloc;
- (id)initForNetworkType:(int)a0 rootCause:(int)a1 startValue:(unsigned long long)a2;
- (void)recordFlowCount:(unsigned long long)a0;
- (void)recordUsageValue:(unsigned long long)a0;

@end
