@protocol BURandomWriteChannel;

@interface BUZipFileWriter : BUZipWriter {
    id<BURandomWriteChannel> _writeChannel;
    id /* block */ _writeChannelCompletionHandler;
}

+ (void)zipDirectoryAtURL:(id)a0 customDirectoryFilename:(id)a1 toURL:(id)a2 queue:(id)a3 progressHandler:(id /* block */)a4;
+ (void)zipDirectoryAtURL:(id)a0 toURL:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

- (id)initWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)copyEntriesFromZipFileWriter:(id)a0 readingFromURL:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)copyRemainingEntries:(id)a0 fromArchive:(id)a1 progress:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithZipFileArchive:(id)a0 error:(id *)a1;
- (id)initWithZipFileArchive:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)prepareWriteChannelWithCloseCompletionHandler:(id /* block */)a0;
- (void)truncateToOffsetImpl:(long long)a0 completion:(id /* block */)a1;

@end
