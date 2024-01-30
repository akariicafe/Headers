@class NSDictionary;

@interface PTCinematographyNetworkLabelSignal : PTCinematographyNetworkSignal

@property (readonly) long long labelOffset;
@property (readonly) unsigned long long labelZero;
@property (readonly) NSDictionary *remap;

- (void).cxx_destruct;
- (id)initWithModelDictionary:(id)a0;
- (void)writePayload:(id)a0 toStream:(id)a1;
- (unsigned long long)_networkLabelForDetection:(id)a0;

@end
