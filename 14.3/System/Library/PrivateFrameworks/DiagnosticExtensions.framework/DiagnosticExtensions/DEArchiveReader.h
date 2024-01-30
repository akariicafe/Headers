@interface DEArchiveReader : NSObject {
    struct archive { } *_archive;
}

- (id)listContainedPaths;
- (id)initWithURL:(id)a0;
- (void)closeArchive;

@end
