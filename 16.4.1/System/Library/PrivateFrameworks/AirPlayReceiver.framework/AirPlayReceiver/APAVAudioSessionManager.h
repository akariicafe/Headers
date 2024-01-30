@class AVAudioSession;

@interface APAVAudioSessionManager : NSObject {
    struct OpaqueFigSimpleMutex { } *_mutex;
    unsigned long long _type;
    BOOL _isSetUp;
    BOOL _forceRAW;
}

@property (class, readonly, nonatomic) APAVAudioSessionManager *mediaSessionManager;
@property (class, readonly, nonatomic) APAVAudioSessionManager *ambientSessionManager;

@property (readonly, nonatomic) AVAudioSession *session;

- (BOOL)setActive:(BOOL)a0 error:(id *)a1;
- (id)initWithType:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)setPrefersMultichannelAudio:(unsigned char)a0 error:(id *)a1;
- (void)resetSession;
- (BOOL)setAudioMode:(struct __CFString { } *)a0 isLongForm:(BOOL)a1 error:(id *)a2;
- (BOOL)setDuckOthers:(unsigned char)a0 error:(id *)a1;
- (void)setUpSession;

@end
