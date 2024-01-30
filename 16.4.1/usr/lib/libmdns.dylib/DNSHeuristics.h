@interface DNSHeuristics : NSObject

+ (BOOL)clearNetworkAsFiltered:(struct __WiFiManagerClient { } *)a0 network:(struct __WiFiNetwork { } *)a1;
+ (BOOL)updateHeuristicState:(BOOL)a0 isTimeout:(BOOL)a1;
+ (id)copyEmptyHeuristicState;
+ (id)copyNetworkSettings:(struct __WiFiNetwork { } *)a0;
+ (BOOL)countersExceedThreshold:(unsigned long long)a0 burstCounter:(unsigned long long)a1;
+ (unsigned long long)currentTimeMs;
+ (BOOL)getNetworkFilteredFlag:(struct __WiFiNetwork { } *)a0;
+ (BOOL)reportResolutionFailure:(id)a0 isTimeout:(BOOL)a1;
+ (BOOL)setNetworkAsFiltered:(struct __WiFiManagerClient { } *)a0 network:(struct __WiFiNetwork { } *)a1;
+ (BOOL)setNetworkAsFiltered:(struct __WiFiManagerClient { } *)a0 network:(struct __WiFiNetwork { } *)a1 filtered:(BOOL)a2;
+ (BOOL)setNetworkSettings:(struct __WiFiManagerClient { } *)a0 network:(struct __WiFiNetwork { } *)a1 value:(id)a2;

@end
