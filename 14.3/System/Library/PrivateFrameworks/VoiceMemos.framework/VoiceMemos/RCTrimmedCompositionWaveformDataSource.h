@class NSURL;

@interface RCTrimmedCompositionWaveformDataSource : RCCompositionWaveformDataSource

@property (readonly, nonatomic) NSURL *destinationWaveformURL;

- (void).cxx_destruct;
- (BOOL)preferLoadingFragmentWaveforms;
- (id)initWithSourceComposition:(id)a0 destinationWaveformURL:(id)a1;
- (id)generatedWaveformOutputURL;

@end
