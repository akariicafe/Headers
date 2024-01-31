@class NSURL, AVAudioFormat;

@interface AVAudioFile : NSObject {
    void *_impl;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) AVAudioFormat *fileFormat;
@property (readonly, nonatomic) AVAudioFormat *processingFormat;
@property (readonly, nonatomic) long long length;
@property (nonatomic) long long framePosition;

- (void)dealloc;
- (BOOL)writeFromBuffer:(id)a0 error:(id *)a1;
- (id)initForWriting:(id)a0 settings:(id)a1 error:(id *)a2;
- (id)initForReading:(id)a0 error:(id *)a1;
- (id)initForReading:(id)a0 commonFormat:(unsigned long long)a1 interleaved:(BOOL)a2 error:(id *)a3;
- (id)initForReadingFromExtAudioFile:(struct OpaqueExtAudioFile { } *)a0 commonFormat:(unsigned long long)a1 interleaved:(BOOL)a2 error:(id *)a3;
- (id)initForReadingFromExtAudioFile:(struct OpaqueExtAudioFile { } *)a0 error:(id *)a1;
- (id)initForWriting:(id)a0 settings:(id)a1 commonFormat:(unsigned long long)a2 interleaved:(BOOL)a3 error:(id *)a4;
- (id)initSecondaryReader:(id)a0 format:(id)a1 error:(id *)a2;
- (BOOL)readIntoBuffer:(id)a0 error:(id *)a1;
- (BOOL)readIntoBuffer:(id)a0 frameCount:(unsigned int)a1 error:(id *)a2;

@end
