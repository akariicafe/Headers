@interface PTCinematographyNetworkRectSignal : PTCinematographyNetworkSignal

@property BOOL useSqrtForArea;

- (id)initWithModelDictionary:(id)a0;
- (void)writePayload:(id)a0 toStream:(id)a1;

@end
