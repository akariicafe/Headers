@interface OISFUZipFreeSpaceEntry : NSObject {
    unsigned long long offset;
    unsigned long long length;
}

- (long long)compareByOffset:(id)a0;

@end
