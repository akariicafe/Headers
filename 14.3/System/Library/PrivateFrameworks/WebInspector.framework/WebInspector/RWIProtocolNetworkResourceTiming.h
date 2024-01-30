@interface RWIProtocolNetworkResourceTiming : RWIProtocolJSONObject

@property (nonatomic) double startTime;
@property (nonatomic) double redirectStart;
@property (nonatomic) double redirectEnd;
@property (nonatomic) double fetchStart;
@property (nonatomic) double domainLookupStart;
@property (nonatomic) double domainLookupEnd;
@property (nonatomic) double connectStart;
@property (nonatomic) double connectEnd;
@property (nonatomic) double secureConnectionStart;
@property (nonatomic) double requestStart;
@property (nonatomic) double responseStart;
@property (nonatomic) double responseEnd;

- (id)initWithStartTime:(double)a0 redirectStart:(double)a1 redirectEnd:(double)a2 fetchStart:(double)a3 domainLookupStart:(double)a4 domainLookupEnd:(double)a5 connectStart:(double)a6 connectEnd:(double)a7 secureConnectionStart:(double)a8 requestStart:(double)a9 responseStart:(double)a10 responseEnd:(double)a11;

@end
