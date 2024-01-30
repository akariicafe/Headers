@class NSDictionary;

@interface PTCinematographyNetworkLabelSignal : PTCinematographyNetworkSignal

@property (readonly) long long labelOffset;
@property (readonly) unsigned long long labelZero;
@property (readonly) NSDictionary *remap;

- (void).cxx_destruct;
- (unsigned long long)_networkLabelForDetection:(id)a0;
- (id)initWithModelDictionary:(id)a0;
- (void)writePayload:(id)a0 toStream:(id)a1;

@end
