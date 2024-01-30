@class NSURL, NSError, NSFileHandle;

@interface _HKArchiveCreator : NSObject <_HKArchiveWriter> {
    struct archive { } *_archive;
}

@property (readonly, copy, nonatomic) NSURL *archiveURL;
@property (readonly, nonatomic) NSFileHandle *fileHandle;
@property (readonly, nonatomic) NSError *error;

+ (BOOL)archiveContentsOfDirectoryAtURL:(id)a0 archiveURL:(id)a1 error:(id *)a2;

- (void)closeArchive;
- (void)_closeArchiveWithError:(id)a0;
- (id)initWithURL:(id)a0 fileHandle:(id)a1 archiveType:(long long)a2;
- (id)initWithURL:(id)a0 archiveType:(long long)a1;
- (BOOL)archiveIsValid;
- (void)addFileToArchive:(id)a0 pathInArchive:(id)a1;
- (long long)writeData:(const void *)a0 ofLength:(unsigned long long)a1;
- (void)_addDataOfSize:(long long)a0 toPathInArchive:(id)a1 fromByteProvider:(id /* block */)a2;
- (id)initWithFileHandle:(id)a0 archiveType:(long long)a1;
- (void)addDataToArchive:(id)a0 pathInArchive:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
