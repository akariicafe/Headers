@class NSString, AVAudioSession, NSHashTable;

@interface ISWrappedAVAudioSession : NSObject {
    BOOL _didBeginObservingOutputVolume;
    NSString *_expectedCategory;
    NSHashTable *_main_volumeObservers;
}

@property (class, readonly, nonatomic) ISWrappedAVAudioSession *sharedAmbientInstance;
@property (class, readonly, nonatomic) ISWrappedAVAudioSession *sharedVideoPlaybackInstance;

@property (readonly, nonatomic) AVAudioSession *audioSession;
@property (readonly, nonatomic) NSString *category;

+ (id)auxiliarySession;
+ (void)sharedAmbientInstanceWithLoadHandler:(id /* block */)a0;
+ (id)sharedPhotosOneUpInstance;
+ (void)sharedPhotosOneUpInstanceWithLoadHandler:(id /* block */)a0;
+ (void)sharedVideoPlaybackInstanceWithLoadHandler:(id /* block */)a0;

- (BOOL)setActive:(BOOL)a0 error:(id *)a1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)setCategory:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)setCategory:(id)a0 mode:(id)a1 routeSharingPolicy:(unsigned long long)a2 options:(unsigned long long)a3 error:(id *)a4;
- (id)initWithAudioSession:(id)a0;
- (void)registerVolumeObserver:(id)a0;
- (void)_beginObservingOutputVolumeIfNeeded;
- (void)_endObservingOutputVolumeIfNeeded;
- (void)_main_informObserversOfVolumeChangeFrom:(float)a0 to:(float)a1;
- (id)initWithAudioSession:(id)a0 category:(id)a1;
- (BOOL)setCategory:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)unregisterVolumeObserver:(id)a0;

@end
