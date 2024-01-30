@interface _NSFileWatcherDirectoryFileHandleInfo : _NSFileWatcherFileHandleInfo {
    struct InodeDevPair { int dev; unsigned long long inode; } inodeDevPair;
}

- (void)close;
- (BOOL)isDirectory;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
