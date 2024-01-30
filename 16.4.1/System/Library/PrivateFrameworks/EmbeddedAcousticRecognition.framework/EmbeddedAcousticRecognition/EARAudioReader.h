@class NSURL;

@interface EARAudioReader : NSObject {
    NSURL *_fileURL;
    unsigned long long _sampleRate;
}

- (void).cxx_destruct;
- (id)enumerateAudioBuffersWithBlock:(id /* block */)a0;
- (id)_opx_enumeratePacketsWithBlock:(id /* block */)a0;
- (id)_avf_enumerateAudioBuffersWithBlock:(id /* block */)a0;
- (id)_opx_enumerateAudioBuffersWithBlock:(id /* block */)a0;
- (id)initWithFileURL:(id)a0 sampleRate:(unsigned long long)a1;

@end
