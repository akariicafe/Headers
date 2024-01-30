@class NSNumber, _HMCameraStream;

@interface HMCameraStream : HMCameraSource

@property (retain, nonatomic) _HMCameraStream *stream;
@property (readonly, nonatomic) NSNumber *audioVolume;
@property (readonly, nonatomic) unsigned long long audioStreamSetting;

- (id)initWithStream:(id)a0;
- (void).cxx_destruct;
- (void)setAudioStreamSetting:(unsigned long long)a0;
- (void)updateAudioVolume:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateAudioStreamSetting:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
