@interface VTAudioFileReader : NSObject {
    struct OpaqueExtAudioFile { } *_fFile;
}

- (void)close;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)readSamples:(unsigned long long)a0;

@end
