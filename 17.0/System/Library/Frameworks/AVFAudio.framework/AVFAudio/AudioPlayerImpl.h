@class NSObject, NSArray, NSDictionary, NSData, NSURL, AVAudioSession, AVAudioFormat;
@protocol AVAudioPlayerDelegate, OS_dispatch_queue;

@interface AudioPlayerImpl : NSObject {
    id<AVAudioPlayerDelegate> _delegate;
    NSData *_data;
    NSURL *_url;
    NSDictionary *_actualSettings;
    AVAudioFormat *_format;
    BOOL _playRetain;
    NSArray *_channelAssignments;
    AVAudioSession *_audioSession;
    BOOL _sessionListenerWasSet;
    unsigned long long _endInterruptionFlags;
    void *_localPlayer;
    NSObject<OS_dispatch_queue> *_gcd;
}

- (id)init;
- (void)dealloc;

@end
