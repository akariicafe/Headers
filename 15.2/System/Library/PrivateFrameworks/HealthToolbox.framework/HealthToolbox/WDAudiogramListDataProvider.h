@class NSArray;

@interface WDAudiogramListDataProvider : WDSampleListDataProvider

@property (readonly, nonatomic) NSArray *audiogramSamples;

- (id)sampleTypes;
- (id)textForObject:(id)a0;

@end
