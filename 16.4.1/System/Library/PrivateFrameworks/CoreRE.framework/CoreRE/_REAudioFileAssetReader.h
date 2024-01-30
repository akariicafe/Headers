@class AVAudioFormat;

@interface _REAudioFileAssetReader : NSObject {
    struct AudioFileAssetReader { struct SeekableInputStream *seekableStream; BOOL ownedStream; struct SeekableInputStreamBufferedReader *backingData; struct OpaqueAudioFileID *audioFile; struct OpaqueExtAudioFile *audioFileRef; long long fileLength; AVAudioFormat *format; } _reader;
}

@property (readonly, nonatomic) struct AudioFileAssetReader { struct SeekableInputStream *x0; BOOL x1; struct SeekableInputStreamBufferedReader *x2; struct OpaqueAudioFileID *x3; struct OpaqueExtAudioFile *x4; long long x5; id x6; } *reader;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getBackingData;
- (id)initWithStream:(struct SeekableInputStream { void /* function */ **x0; } *)a0 ownsStream:(BOOL)a1;

@end
