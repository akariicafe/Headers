@interface VTAudioFileReader : NSObject {
    struct OpaqueExtAudioFile { } *_fFile;
}

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void)close;
- (id)readSamples:(unsigned long long)a0;

@end
