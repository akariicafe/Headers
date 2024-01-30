@class NSString, AVWeakReference, NSDictionary;
@protocol AVAudioSessionDelegateMediaPlayerOnly;

@interface AVAudioSessionMediaPlayerOnlyInternal : NSObject {
    AVWeakReference *weakReference;
    struct OpaqueFigPlayer { } *figPlayer;
    BOOL isAppAudioSession;
    BOOL isActive;
    NSString *category;
    NSString *mode;
    NSDictionary *activationContext;
    BOOL usingLongFormAudio;
    id<AVAudioSessionDelegateMediaPlayerOnly> delegate;
}

@end
