@class NSString, NSArray;

@interface AXMAudioDataSource : NSObject

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) double sampleRate;
@property (readonly, nonatomic) struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } *sampleBuffer;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long currentSampleIndex;
@property (nonatomic, getter=isCircular) BOOL circular;
@property (nonatomic) double level;
@property (readonly, nonatomic) NSArray *effectsChain;

- (id)init;
- (void).cxx_destruct;
- (void)normalizeAudio;
- (void)dealloc;
- (void)addEffectToChain:(id)a0;
- (void)removeEffectFromChain:(id)a0;
- (id)description;
- (id)initWithName:(id)a0 sampleRate:(double)a1 circular:(BOOL)a2;
- (void)processEffects:(unsigned long long)a0;

@end
