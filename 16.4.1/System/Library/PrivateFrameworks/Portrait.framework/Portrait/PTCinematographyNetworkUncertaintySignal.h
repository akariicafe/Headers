@interface PTCinematographyNetworkUncertaintySignal : PTCinematographyNetworkSignal

@property (readonly) float timerSecondsDivisor;

- (float)_timerUncertaintyForPayload:(id)a0;
- (id)initWithModelDictionary:(id)a0;
- (void)writePayload:(id)a0 toStream:(id)a1;

@end
