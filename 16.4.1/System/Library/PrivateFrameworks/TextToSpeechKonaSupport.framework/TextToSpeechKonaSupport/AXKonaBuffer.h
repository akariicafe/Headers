@class NSArray, AVAudioPCMBuffer;

@interface AXKonaBuffer : NSObject

@property (retain, nonatomic) AVAudioPCMBuffer *buffer;
@property (retain, nonatomic) NSArray *markers;

- (void).cxx_destruct;

@end
