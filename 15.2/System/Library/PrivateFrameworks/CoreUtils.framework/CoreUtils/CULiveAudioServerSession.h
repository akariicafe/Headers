@class AVAudioFormat, AVAudioPlayerNode, AVAudioEngine, AVAudioConverter, NSObject;
@protocol OS_dispatch_queue;

@interface CULiveAudioServerSession : NSObject {
    AVAudioConverter *_audioConverter;
    AVAudioEngine *_audioEngine;
    AVAudioFormat *_audioInputFormat;
    AVAudioFormat *_audioOutputFormat;
    AVAudioPlayerNode *_audioPlayerNode;
    BOOL _playbackStarted;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (void)invalidate;
- (void)handleDataEvent:(id)a0;
- (BOOL)activateAndReturnError:(id *)a0;

@end
