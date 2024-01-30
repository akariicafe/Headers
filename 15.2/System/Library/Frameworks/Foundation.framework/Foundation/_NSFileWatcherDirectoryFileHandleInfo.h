@interface _NSFileWatcherDirectoryFileHandleInfo : _NSFileWatcherFileHandleInfo {
    struct InodeDevPair { int dev; unsigned long long inode; } inodeDevPair;
}

- (void)close;
- (BOOL)isDirectory;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
