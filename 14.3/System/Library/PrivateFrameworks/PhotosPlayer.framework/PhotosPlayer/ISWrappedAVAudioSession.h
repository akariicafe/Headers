@class NSString, AVAudioSession;

@interface ISWrappedAVAudioSession : NSObject {
    BOOL _didBeginObservingOutputVolume;
}

@property (class, readonly, nonatomic) ISWrappedAVAudioSession *sharedAmbientInstance;
@property (class, readonly, nonatomic) ISWrappedAVAudioSession *sharedPlaybackInstance;

@property (readonly, nonatomic) AVAudioSession *audioSession;
@property (copy, nonatomic) id /* block */ outputVolumeChangeHandler;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) float outputVolume;

+ (id)auxiliarySession;
+ (void)sharedAmbientInstanceWithLoadHandler:(id /* block */)a0;
+ (void)sharedPlaybackInstanceWithLoadHandler:(id /* block */)a0;
+ (void)sharedPhotosOneUpInstanceWithLoadHandler:(id /* block */)a0;
+ (id)sharedPhotosOneUpInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)setActive:(BOOL)a0 error:(id *)a1;
- (BOOL)setCategory:(id)a0 error:(id *)a1;
- (id)_init;
- (void)_endObservingOutputVolumeIfNeeded;
- (BOOL)setCategory:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setCategory:(id)a0 mode:(id)a1 routeSharingPolicy:(unsigned long long)a2 options:(unsigned long long)a3 error:(id *)a4;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_beginObservingOutputVolumeIfNeeded;

@end
