@class NSData, AVAudioFormat;

@interface _REAudioFileAssetReader : NSObject {
    struct AudioFileAssetReader { char *data; unsigned long long size; NSData *backing; struct OpaqueAudioFileID *audioFile; struct OpaqueExtAudioFile *audioFileRef; long long fileLength; AVAudioFormat *format; } _reader;
}

@property (readonly, nonatomic) struct AudioFileAssetReader { char *x0; unsigned long long x1; id x2; struct OpaqueAudioFileID *x3; struct OpaqueExtAudioFile *x4; long long x5; id x6; } *reader;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithData:(id)a0 bytes:(const void *)a1 length:(unsigned long long)a2;

@end
