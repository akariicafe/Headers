@class SKShader, SKUniform, SKTexture, SKNode, SKSpriteNode, SKEmitterNode;

@interface ETHeartbeatMessage : ETMessage {
    SKNode *_heartNode;
    SKSpriteNode *_heartLines;
    SKSpriteNode *_heart;
    SKEmitterNode *_heartWisp;
    SKShader *_linesShader;
    SKShader *_heartShader;
    SKUniform *_speedUniform;
    SKUniform *_warpedTexAtlasUniform;
    SKUniform *_burTexUniform;
    SKUniform *_noiseTexUniform;
    SKUniform *_scaleUniform;
    SKUniform *_shaderTimeUniform;
    SKNode *_heartScale;
    float _hapticLoopPeriod;
    SKTexture *_heartbreakAtlas;
}

@property (nonatomic) float beatsPerMinute;
@property (nonatomic) int duration;
@property (nonatomic) float scale;
@property (nonatomic) struct CGPoint { double x; double y; } normalizedCenter;
@property (nonatomic) double rotation;
@property (readonly, nonatomic, getter=isBroken) BOOL broken;
@property (readonly, nonatomic) double heartbreakTime;

+ (unsigned short)messageType;

- (void).cxx_destruct;
- (void)stopPlaying;
- (id)description;
- (void)setMute:(BOOL)a0;
- (id)archiveData;
- (id)initWithArchiveData:(id)a0;
- (id)messageTypeAsString;
- (double)messageDuration;
- (void)displayInScene:(id)a0;
- (void)breakHeart;
- (void)startHeartbeat:(id)a0;
- (void)_stopAudioPlayback;
- (void)_startAudioPlayback;
- (void)_displayInScene:(id)a0 useDuration:(BOOL)a1;
- (void)_displayInScene:(id)a0 useDuration:(BOOL)a1 fastStart:(BOOL)a2;
- (void)playBeatWithDuration:(double)a0;
- (void)startHeartbeat:(id)a0 fastStart:(BOOL)a1;
- (void)moveHeartNodeByX:(double)a0 y:(double)a1 duration:(double)a2;

@end
