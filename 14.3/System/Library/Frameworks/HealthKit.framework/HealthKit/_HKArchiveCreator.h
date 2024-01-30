@class NSURL, NSFileHandle;

@interface _HKArchiveCreator : NSObject <_HKArchiveWriter> {
    struct archive { } *_archive;
}

@property (readonly, copy, nonatomic) NSURL *archiveURL;
@property (readonly, nonatomic) NSFileHandle *fileHandle;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)archiveIsValid;
- (void)closeArchive;
- (long long)writeData:(const void *)a0 ofLength:(unsigned long long)a1;
- (id)initWithURL:(id)a0 archiveType:(long long)a1;
- (id)initWithURL:(id)a0 fileHandle:(id)a1 archiveType:(long long)a2;
- (void)_addDataOfSize:(long long)a0 toPathInArchive:(id)a1 fromByteProvider:(id /* block */)a2;
- (id)initWithFileHandle:(id)a0 archiveType:(long long)a1;
- (void)addFileToArchive:(id)a0 pathInArchive:(id)a1;
- (void)addDataToArchive:(id)a0 pathInArchive:(id)a1;

@end
