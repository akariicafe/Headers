@interface AUToneMeisterParameterImporter : NSObject

@property void *toneMeister;
@property unsigned int numberOfChannels;

- (void)setValue:(float)a0 forParameter:(unsigned int)a1;
- (BOOL)filterFrequencyIsValid:(id)a0 message:(id *)a1;
- (void)setValue:(float)a0 forParameter:(unsigned int)a1 ofFilter:(unsigned int)a2;
- (id)availableFilterGroup;
- (id)availableFilters;
- (BOOL)bandShelveFrequenciesAreValid:(id)a0 message:(id *)a1;
- (BOOL)dictionaryIsValid:(id)a0 withOptions:(int)a1 message:(id *)a2;
- (BOOL)dictionaryWouldChangeChannelMuteParameter:(id)a0 message:(id)a1;
- (BOOL)dictionaryWouldChangeChannelPhaseFlipParameter:(id)a0 message:(id)a1;
- (BOOL)dictionaryWouldChangeInputGainParameter:(id)a0;
- (BOOL)filterChannelAllocationIsValid:(id)a0 message:(id *)a1;
- (BOOL)filterGainIsValid:(id)a0 message:(id *)a1;
- (BOOL)filterOrderIsValid:(id)a0 message:(id *)a1;
- (BOOL)filterQualityIsValid:(id)a0 message:(id *)a1;
- (BOOL)filterTypeIsValid:(id)a0 message:(id *)a1;
- (id)filterTypeString:(unsigned int)a0;
- (id)filterTypeStrings;
- (BOOL)import:(id)a0 withOptions:(int)a1 andMessage:(id *)a2;
- (void)importChannelAllocationFromDictionary:(id)a0 andAssignToFilter:(unsigned int)a1;
- (void)importChannelMuteParameterFromDictionary:(id)a0;
- (void)importChannelPhaseFlipParameterFromDictionary:(id)a0;
- (void)importFilterAutomationFromDictionary:(id)a0 andAssignToFilter:(unsigned int)a1;
- (void)importFilterFrequencyFromDictionary:(id)a0 andAssignToFilter:(unsigned int)a1;
- (void)importFilterGainFromDictionary:(id)a0 andAssignToFilter:(unsigned int)a1;
- (void)importFilterOrderFromDictionary:(id)a0 andAssignToFilter:(unsigned int)a1;
- (void)importFilterQualityFromDictionary:(id)a0 andAssignToFilter:(unsigned int)a1;
- (void)importFilterStateFromDictionary:(id)a0 andAssignToFilter:(unsigned int)a1;
- (void)importFilterTypeFromDictionary:(id)a0 andAssignToFilter:(unsigned int)a1;
- (void)importInputGainParameterFromDictionary:(id)a0;
- (void)importPhaseEqualizerFromDictionary:(id)a0 andAssignToFilter:(unsigned int)a1;
- (id)initWithToneMeister:(void *)a0 andNumberOfChannels:(unsigned int)a1;
- (BOOL)lowHighShelveFrequenciesAreValid:(id)a0 message:(id *)a1;
- (BOOL)numberOfChannelsForGlobalParametersIsValid:(id)a0 message:(id *)a1;
- (BOOL)parametricFilterFrequencyIsValid:(id)a0 message:(id *)a1;
- (BOOL)setValue:(float)a0 forAutomationParameter:(unsigned int)a1 ofFilter:(unsigned int)a2;

@end
