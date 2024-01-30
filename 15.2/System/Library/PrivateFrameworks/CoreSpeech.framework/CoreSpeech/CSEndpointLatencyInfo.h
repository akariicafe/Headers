@class NSMutableArray;

@interface CSEndpointLatencyInfo : NSObject

@property (retain, nonatomic) NSMutableArray *trailingPktSpeechLatencies;
@property (retain, nonatomic) NSMutableArray *trailingPktLatencies;
@property (nonatomic) unsigned long long numOfAudioPackets;
@property (nonatomic) unsigned long long numOfValidTrailingPackets;
@property (nonatomic) unsigned long long numOfValidTrailingSpeechPackets;
@property (nonatomic) double firstPktLatency;

- (void).cxx_destruct;
- (id)init;
- (void)_emitMHEndpointLatencyInfo:(id)a0 withRequestMHUUID:(id)a1;
- (void)addPktInfoWithTimestamp:(unsigned long long)a0 arrivalTimestamp:(unsigned long long)a1 currentMachTime:(unsigned long long)a2;
- (void)reportWithRequestMHUUID:(id)a0;

@end
