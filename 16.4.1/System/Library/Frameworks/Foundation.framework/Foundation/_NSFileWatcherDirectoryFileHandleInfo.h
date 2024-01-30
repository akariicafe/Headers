@interface _NSFileWatcherDirectoryFileHandleInfo : _NSFileWatcherFileHandleInfo {
    struct InodeDevPair { int dev; unsigned long long inode; } inodeDevPair;
}

- (BOOL)isDirectory;
- (BOOL)isEqual:(id)a0;
- (void)close;
- (unsigned long long)hash;
- (id)description;

@end
