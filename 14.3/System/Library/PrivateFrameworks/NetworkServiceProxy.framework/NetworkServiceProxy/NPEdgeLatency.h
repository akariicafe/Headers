@class NPAverage, NSString, NSDate, NWTCPConnection, NWEndpoint, NSNumber, NSObject;
@protocol OS_dispatch_source;

@interface NPEdgeLatency : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long reprobeCount;
@property (retain) NSObject<OS_dispatch_source> *probeTimer;
@property (retain) NWTCPConnection *probeConnection;
@property (copy) id /* block */ probeCompletionHandler;
@property (retain) NSNumber *currentTimeout;
@property BOOL needReprobe;
@property BOOL isObserving;
@property unsigned long long edgeIndex;
@property (retain) NWEndpoint *probeEndpoint;
@property unsigned long long roundTripTime;
@property (retain) NPAverage *roundTripAverage;
@property (retain) NPAverage *roundTripAverageObserved;
@property (retain) NSNumber *addressFamily;
@property long long interfaceType;
@property BOOL probeTFO;
@property BOOL probeNoTFOCookie;
@property long long TFOStatus;
@property (readonly) NSString *addressFamilyString;
@property (readonly) NSString *TFOStatusString;
@property (readonly) NSString *connectionParametersString;
@property (readonly) BOOL isTFOEnabled;
@property long long probeCount;
@property (retain) NSDate *creationDate;
@property BOOL passedReprobeThreshold;

- (BOOL)isMatched:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProbeEndpoint:(id)a0 probeTFO:(BOOL)a1;
- (unsigned long long)getRoundTripSample:(unsigned long long)a0;
- (BOOL)fillTestLatency;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)pingPong;
- (BOOL)isMatched:(id)a0 parameters:(struct networkParameters { BOOL x0; BOOL x1; } *)a1;
- (BOOL)isComplete:(BOOL)a0;
- (void)addRoundTripSample:(unsigned long long)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addRoundTripSampleObserved:(unsigned long long)a0;
- (void)measureLatencyWithTimeout:(id)a0 completionHandler:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (void)addRoundTripSamples:(id)a0;

@end
