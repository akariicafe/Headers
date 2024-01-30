@class AVAudioPlayerNode, AVAudioUnitTimePitch;

@interface AXMActiveSound : NSObject

@property (retain, nonatomic) AVAudioPlayerNode *player;
@property (retain, nonatomic) AVAudioUnitTimePitch *timePitch;

- (void).cxx_destruct;
- (id)init;
- (void)connectToEngine:(id)a0;
- (void)disconnectFromEngine:(id)a0;
- (BOOL)beginPlayback:(id)a0 withError:(id *)a1;

@end
