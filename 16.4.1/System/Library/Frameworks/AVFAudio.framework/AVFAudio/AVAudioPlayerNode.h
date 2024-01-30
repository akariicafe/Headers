@class NSString;

@interface AVAudioPlayerNode : AVAudioNode <AVAudioMixing>

@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)stop;
- (id)init;
- (void)didAttachToEngine:(id)a0;
- (void)play;
- (void)scheduleBuffer:(id)a0 atTime:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)scheduleBuffer:(id)a0 completionHandler:(id /* block */)a1;
- (void)playAtTime:(id)a0;
- (void)scheduleFile:(id)a0 atTime:(id)a1 completionHandler:(id /* block */)a2;
- (void)callLegacyCompletionHandlerForType:(long long)a0 legacyHandler:(id /* block */)a1;
- (id)nodeTimeForPlayerTime:(id)a0;
- (id)playerTimeForNodeTime:(id)a0;
- (void)prepareWithFrameCount:(unsigned int)a0;
- (void)scheduleBuffer:(id)a0 atTime:(id)a1 options:(unsigned long long)a2 completionCallbackType:(long long)a3 completionHandler:(id /* block */)a4;
- (void)scheduleBuffer:(id)a0 completionCallbackType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)scheduleFile:(id)a0 atTime:(id)a1 completionCallbackType:(long long)a2 completionHandler:(id /* block */)a3;
- (void)scheduleSegment:(id)a0 startingFrame:(long long)a1 frameCount:(unsigned int)a2 atTime:(id)a3 completionCallbackType:(long long)a4 completionHandler:(id /* block */)a5;
- (void)scheduleSegment:(id)a0 startingFrame:(long long)a1 frameCount:(unsigned int)a2 atTime:(id)a3 completionHandler:(id /* block */)a4;

@end
