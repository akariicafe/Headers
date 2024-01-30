@interface AUToneMeisterParameterExporter : NSObject

@property void *toneMeister;

- (id)exportTimeStamp;
- (id)exportInputGain;
- (id)exportAutomationOfFilter:(unsigned int)a0;
- (id)exportChannelAllocationOfFilter:(unsigned int)a0;
- (id)exportChannelMuteAndPhaseFlipParameters;
- (id)exportFrequencyOfFilter:(unsigned int)a0;
- (id)exportGainOfFilter:(unsigned int)a0;
- (id)exportOrderOfFilter:(unsigned int)a0;
- (id)exportParametersOfAllFilters:(BOOL)a0;
- (id)exportParametersOfFilter:(unsigned int)a0;
- (id)exportPhaseOfFilter:(unsigned int)a0;
- (id)exportQualtiyOfFilter:(unsigned int)a0;
- (id)exportStateOfFilter:(unsigned int)a0;
- (id)exportTypeOfFilter:(unsigned int)a0;
- (id)exportWithOptions:(int)a0;
- (id)initWithToneMeister:(void *)a0;

@end
