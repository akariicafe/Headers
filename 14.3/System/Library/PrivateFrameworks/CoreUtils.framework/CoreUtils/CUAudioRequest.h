@class AVAudioPlayer, NSString;

@interface CUAudioRequest : NSObject

@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *label;

- (void).cxx_destruct;

@end
