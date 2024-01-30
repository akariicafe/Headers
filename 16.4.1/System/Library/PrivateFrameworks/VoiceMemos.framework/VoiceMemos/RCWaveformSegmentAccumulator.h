@class NSString, NSMutableArray, RCWaveformGenerator;

@interface RCWaveformSegmentAccumulator : NSObject <RCWaveformGeneratorSegmentOutputObserver>

@property (retain, nonatomic) RCWaveformGenerator *generator;
@property (retain, nonatomic) NSMutableArray *segments;
@property (readonly, nonatomic) BOOL finishedSuccessfully;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)waveformGeneratorDidFinishLoading:(id)a0 error:(id)a1;
- (void)waveformGenerator:(id)a0 didLoadWaveformSegment:(id)a1;
- (BOOL)waitUntilFinished;
- (void)waveformGeneratorWillBeginLoading:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithWaveformGenerator:(id)a0;

@end
