@class NSURL, NSArray;

@interface GTFileWriterSession : NSObject {
    NSURL *_baseURL;
    NSArray *_fileEntries;
    unsigned int _totalWriteSize;
    void *_scratchBytes;
    unsigned int _scratchLength;
    int _algorithm;
    unsigned int _fileChunkSize;
    int _fileIndex;
    int _fd;
}

- (void)finish;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startWithFileEntries:(id)a0 relativeToURL:(id)a1 config:(struct { unsigned int x0; unsigned int x1; unsigned int x2; })a2;
- (void)writeFileChunks:(id)a0 withData:(id)a1;

@end
