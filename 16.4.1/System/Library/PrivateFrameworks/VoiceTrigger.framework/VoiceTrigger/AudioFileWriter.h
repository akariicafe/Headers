@interface AudioFileWriter : NSObject {
    BOOL isWriting;
    struct OpaqueExtAudioFile { } *fFile;
}

- (void)dealloc;
- (void)close;
- (id)initWithURL:(id)a0 inputFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1 outputFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a2;
- (short)addSamples:(void *)a0 len:(long long)a1;

@end
