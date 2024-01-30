@class NSURL;

@interface RCTrimmedCompositionWaveformDataSource : RCCompositionWaveformDataSource

@property (readonly, nonatomic) NSURL *destinationWaveformURL;

- (id)initWithSourceComposition:(id)a0 destinationWaveformURL:(id)a1;
- (id)generatedWaveformOutputURL;
- (void).cxx_destruct;
- (BOOL)preferLoadingFragmentWaveforms;

@end
