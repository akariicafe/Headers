@class NSString, NSDictionary;

@interface BWNoiseReductionAndSharpeningParameters : NSObject {
    NSString *_portType;
    NSDictionary *_noiseReductionAndSharpeningConfiguration;
}

- (id)noiseReductionAndSharpeningConfigurationForType:(int)a0 gain:(float)a1;
- (void)dealloc;
- (id)description;
- (id)_noiseReductionAndSharpeningParametersForType:(int)a0;
- (id)initWithPortType:(id)a0 sensorIDDictionary:(id)a1;
- (id)portType;

@end
