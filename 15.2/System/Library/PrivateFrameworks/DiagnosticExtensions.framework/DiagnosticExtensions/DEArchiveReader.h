@interface DEArchiveReader : NSObject {
    struct archive { } *_archive;
}

- (id)initWithURL:(id)a0;
- (void)closeArchive;
- (id)listContainedPaths;

@end
