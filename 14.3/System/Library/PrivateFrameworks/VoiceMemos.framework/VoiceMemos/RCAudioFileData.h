@interface RCAudioFileData : NSData {
    struct OpaqueAudioFileID { } *_audioFile;
    unsigned long long _audioFileSize;
}

+ (id)audioFileDataWithURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)_initWithURL:(id)a0 error:(id *)a1;
- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;

@end
