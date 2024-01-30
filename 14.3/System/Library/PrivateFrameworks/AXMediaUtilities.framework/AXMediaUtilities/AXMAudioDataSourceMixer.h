@class NSString, NSSet;

@interface AXMAudioDataSourceMixer : AXMAudioDataSource

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double panning;
@property (retain, nonatomic) NSSet *dataSources;
@property (readonly, nonatomic) BOOL isMonoOutput;

- (void).cxx_destruct;
- (void)addDataSource:(id)a0;
- (id)description;
- (void)removeDataSource:(id)a0;
- (id)initWithName:(id)a0 sampleRate:(double)a1 circular:(BOOL)a2;
- (void)setCurrentSampleIndex:(unsigned long long)a0;
- (void)removeAllDataSources;
- (void)prepareNextSamples:(unsigned long long)a0;

@end
