@class AVAudioSession;

@interface APAVAudioSessionManager : NSObject {
    struct OpaqueFigSimpleMutex { } *_mutex;
    unsigned long long _type;
    BOOL _isSetUp;
}

@property (class, readonly, nonatomic) APAVAudioSessionManager *mediaSessionManager;
@property (class, readonly, nonatomic) APAVAudioSessionManager *ambientSessionManager;

@property (readonly, nonatomic) AVAudioSession *session;

- (BOOL)setPrefersMultichannelAudio:(unsigned char)a0 error:(id *)a1;
- (BOOL)setActive:(BOOL)a0 error:(id *)a1;
- (void)resetSession;
- (id)initWithType:(unsigned long long)a0;
- (void)dealloc;
- (void)setUpSession;
- (BOOL)setAudioMode:(struct __CFString { } *)a0 isLongForm:(BOOL)a1 error:(id *)a2;
- (BOOL)setDuckOthers:(unsigned char)a0 error:(id *)a1;

@end
