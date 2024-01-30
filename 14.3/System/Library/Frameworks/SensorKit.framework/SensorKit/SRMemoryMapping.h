@interface SRMemoryMapping : NSObject {
    int _protection;
    int _advice;
    void *_start;
    void *_currentPosition;
    long long _offset;
    void *_mappedAddress;
    unsigned long long _size;
    unsigned long long _pageAlignedSize;
}

+ (void)initialize;

- (void)dealloc;

@end
