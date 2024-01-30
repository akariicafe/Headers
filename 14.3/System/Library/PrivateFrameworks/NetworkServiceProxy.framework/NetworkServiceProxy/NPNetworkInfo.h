@class NSArray, NPEdgeSelection, NSString, NSDate;

@interface NPNetworkInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *edgeLatencies;
@property (retain) NSArray *currentLatencyMap;
@property (retain) NSDate *probeRateLimit;
@property (retain) NPEdgeSelection *edgeSelection;
@property BOOL isProbeInProgress;
@property (retain, nonatomic) NSDate *lastVisited;
@property (retain, nonatomic) NSDate *lastUsed;
@property (readonly, nonatomic) NSString *lastVisitedDesc;
@property (readonly, nonatomic) NSString *lastUsedDesc;
@property long long lastFallbackReason;
@property BOOL hasIPv6;

+ (long long)failureReasonToFallbackReason:(unsigned int)a0;

- (void).cxx_destruct;
- (void)resortEdgeLatenciesUsingComparator:(id /* block */)a0;
- (void)handleTFOFailedForAddressFamily:(unsigned char)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isLatency:(id)a0 qualifiedForLatencyMap:(id)a1 parameters:(struct networkParameters { BOOL x0; BOOL x1; } *)a2 requireUniqueEdges:(BOOL)a3;
- (long long)compareLastVisited:(id)a0;
- (void)mergeNewLatencies:(id)a0 usingComparator:(id /* block */)a1;
- (void)rebuildLatencyMapWithViewSize:(id)a0 edgeCount:(unsigned long long)a1 parameters:(struct networkParameters { BOOL x0; BOOL x1; } *)a2;
- (void)encodeWithCoder:(id)a0;

@end
