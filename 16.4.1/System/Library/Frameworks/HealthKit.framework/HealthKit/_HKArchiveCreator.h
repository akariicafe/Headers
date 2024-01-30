@class NSURL, NSError, NSFileHandle;

@interface _HKArchiveCreator : NSObject <_HKArchiveWriter> {
    struct archive { } *_archive;
}

@property (readonly, copy, nonatomic) NSURL *archiveURL;
@property (readonly, nonatomic) NSFileHandle *fileHandle;
@property (readonly, nonatomic) NSError *error;

+ (BOOL)archiveContentsOfDirectoryAtURL:(id)a0 archiveURL:(id)a1 error:(id *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)closeArchive;
- (void)addDataToArchive:(id)a0 pathInArchive:(id)a1;
- (void)addFileToArchive:(id)a0 pathInArchive:(id)a1;
- (id)initWithFileHandle:(id)a0 archiveType:(long long)a1;
- (void)_addDataOfSize:(long long)a0 toPathInArchive:(id)a1 fromByteProvider:(id /* block */)a2;
- (void)_closeArchiveWithError:(id)a0;
- (BOOL)archiveIsValid;
- (id)initWithURL:(id)a0 archiveType:(long long)a1;
- (id)initWithURL:(id)a0 fileHandle:(id)a1 archiveType:(long long)a2;
- (long long)writeData:(const void *)a0 ofLength:(unsigned long long)a1;

@end
