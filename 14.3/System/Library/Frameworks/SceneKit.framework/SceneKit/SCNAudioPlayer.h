@class AVAudioPlayerNode, SCNAudioSource, AVAudioNode;

@interface SCNAudioPlayer : NSObject {
    struct __C3DNode { } *_nodeRef;
    BOOL _shouldRecycle;
}

@property (readonly) struct __C3DScene { } *scene;
@property (readonly) BOOL customAudioNode;
@property BOOL completed;
@property (readonly) AVAudioPlayerNode *audioPlayer;
@property (copy, nonatomic) id /* block */ willStartPlayback;
@property (copy, nonatomic) id /* block */ didFinishPlayback;
@property (readonly, nonatomic) AVAudioNode *audioNode;
@property (readonly, nonatomic) SCNAudioSource *audioSource;

+ (id)audioPlayerWithAVAudioNode:(id)a0;
+ (id)audioPlayerWithSource:(id)a0;

- (void)play;
- (id)initWithSource:(id)a0;
- (void)recycle;
- (void)reset;
- (void)dealloc;
- (struct __C3DNode { } *)nodeRef;
- (id)initWithAVAudioNode:(id)a0;
- (id)audioBufferFormat;
- (void)setNodeRef:(struct __C3DNode { } *)a0;
- (const void *)__CFObject;

@end
