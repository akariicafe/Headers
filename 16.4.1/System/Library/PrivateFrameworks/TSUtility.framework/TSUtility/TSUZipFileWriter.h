@protocol TSURandomWriteChannel;

@interface TSUZipFileWriter : TSUZipWriter {
    id<TSURandomWriteChannel> _writeChannel;
}

+ (void)zipDirectoryAtURL:(id)a0 toURL:(id)a1 queue:(id)a2 completion:(id /* block */)a3;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)writeChannel;

@end
