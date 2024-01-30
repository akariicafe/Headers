@class AVAudioPlayerNode, AVAudioUnitTimePitch;

@interface AXMActiveSound : NSObject

@property (retain, nonatomic) AVAudioPlayerNode *player;
@property (retain, nonatomic) AVAudioUnitTimePitch *timePitch;

- (id)init;
- (void).cxx_destruct;
- (void)connectToEngine:(id)a0;
- (void)disconnectFromEngine:(id)a0;
- (BOOL)beginPlayback:(id)a0 withError:(id *)a1;

@end
