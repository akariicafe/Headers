@class NSString;

@interface AVAudioPlayerNode : AVAudioNode <AVAudioMixing>

@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playAtTime:(id)a0;
- (id)init;
- (void)pause;
- (void)play;
- (void)didAttachToEngine:(id)a0;
- (void)scheduleBuffer:(id)a0 atTime:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)scheduleBuffer:(id)a0 completionHandler:(id /* block */)a1;
- (void)stop;
- (void)scheduleFile:(id)a0 atTime:(id)a1 completionHandler:(id /* block */)a2;
- (void)prepareWithFrameCount:(unsigned int)a0;
- (void)scheduleFile:(id)a0 atTime:(id)a1 completionCallbackType:(long long)a2 completionHandler:(id /* block */)a3;
- (id)playerTimeForNodeTime:(id)a0;
- (void)scheduleBuffer:(id)a0 atTime:(id)a1 options:(unsigned long long)a2 completionCallbackType:(long long)a3 completionHandler:(id /* block */)a4;
- (void)scheduleSegment:(id)a0 startingFrame:(long long)a1 frameCount:(unsigned int)a2 atTime:(id)a3 completionCallbackType:(long long)a4 completionHandler:(id /* block */)a5;
- (void)callLegacyCompletionHandlerForType:(long long)a0 legacyHandler:(id /* block */)a1;
- (void)scheduleBuffer:(id)a0 completionCallbackType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)scheduleSegment:(id)a0 startingFrame:(long long)a1 frameCount:(unsigned int)a2 atTime:(id)a3 completionHandler:(id /* block */)a4;
- (id)nodeTimeForPlayerTime:(id)a0;

@end
