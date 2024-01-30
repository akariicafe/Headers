@interface BMMemoryMapping : NSObject {
    int _protection;
    int _advice;
    void *_start;
    unsigned long long _currentOffset;
    unsigned long long _size;
    long long _offset;
    void *_mappedAddress;
    unsigned long long _pageAlignedSize;
    unsigned long long _offsetSpace;
}

- (id)init;
- (BOOL)canAtomicallyAccessOffset:(unsigned long long)a0;
- (void)dealloc;

@end
