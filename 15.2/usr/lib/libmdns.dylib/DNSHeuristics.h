@interface DNSHeuristics : NSObject

+ (BOOL)updateHeuristicState:(BOOL)a0 isTimeout:(BOOL)a1;
+ (BOOL)setNetworkAsFiltered:(struct __WiFiManagerClient { } *)a0 network:(struct __WiFiNetwork { } *)a1 filtered:(BOOL)a2;
+ (unsigned long long)currentTimeMs;
+ (BOOL)countersExceedThreshold:(unsigned long long)a0 burstCounter:(unsigned long long)a1;
+ (id)copyNetworkSettings:(struct __WiFiNetwork { } *)a0;
+ (BOOL)reportResolutionFailure:(id)a0 isTimeout:(BOOL)a1;
+ (BOOL)getNetworkFilteredFlag:(struct __WiFiNetwork { } *)a0;
+ (BOOL)setNetworkAsFiltered:(struct __WiFiManagerClient { } *)a0 network:(struct __WiFiNetwork { } *)a1;
+ (BOOL)clearNetworkAsFiltered:(struct __WiFiManagerClient { } *)a0 network:(struct __WiFiNetwork { } *)a1;
+ (id)copyEmptyHeuristicState;
+ (BOOL)setNetworkSettings:(struct __WiFiManagerClient { } *)a0 network:(struct __WiFiNetwork { } *)a1 value:(id)a2;

@end
