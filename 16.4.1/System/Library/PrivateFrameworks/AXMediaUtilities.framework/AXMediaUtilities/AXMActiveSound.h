@class AVAudioPlayerNode, AVAudioUnitTimePitch;

@interface AXMActiveSound : NSObject

@property (retain, nonatomic) AVAudioPlayerNode *player;
@property (retain, nonatomic) AVAudioUnitTimePitch *timePitch;

- (id)init;
- (void).cxx_destruct;
- (BOOL)beginPlayback:(id)a0 withError:(id *)a1;
- (void)connectToEngine:(id)a0;
- (void)disconnectFromEngine:(id)a0;

@end
