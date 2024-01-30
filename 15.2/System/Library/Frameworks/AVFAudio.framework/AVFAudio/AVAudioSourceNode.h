@class NSString;

@interface AVAudioSourceNode : AVAudioNode <AVAudioMixing>

@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)pullInputBlockFromRenderBlock:(id /* block */)a0;

- (id)initWithRenderBlock:(id /* block */)a0;
- (id)initWithFormat:(id)a0 renderBlock:(id /* block */)a1;

@end
