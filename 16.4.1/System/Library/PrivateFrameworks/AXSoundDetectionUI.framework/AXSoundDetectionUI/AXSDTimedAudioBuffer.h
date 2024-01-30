@class AVAudioPCMBuffer, AVAudioTime;

@interface AXSDTimedAudioBuffer : NSObject

@property (retain, nonatomic) AVAudioPCMBuffer *buffer;
@property (retain, nonatomic) AVAudioTime *time;

- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0 atTime:(id)a1;

@end
