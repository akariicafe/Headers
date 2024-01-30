@class NSURL, NSObject;
@protocol OS_dispatch_queue, TSUReadChannel;

@interface TSUZipFileArchive : TSUZipArchive {
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _archiveLength;
    id<TSUReadChannel> _archiveReadChannel;
    NSURL *_temporaryDirectoryURL;
}

+ (void)readArchiveFromURL:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)archiveLength;
- (void)removeTemporaryDirectory;
- (void)createTemporaryDirectoryRelativeToURL:(id)a0;
- (id)readChannel;
- (BOOL)openWithURL:(id)a0;
- (BOOL)reopenWithTemporaryURL:(id)a0;
- (id)initWithWriter:(id)a0 atURL:(id)a1;
- (BOOL)copyToTemporaryLocationRelativeToURL:(id)a0;

@end
