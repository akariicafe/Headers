@interface VTAudioFileReader : NSObject {
    struct OpaqueExtAudioFile { } *_fFile;
}

- (void)close;
- (id)initWithURL:(id)a0;
- (void)dealloc;
- (id)readSamples:(unsigned long long)a0;

@end
