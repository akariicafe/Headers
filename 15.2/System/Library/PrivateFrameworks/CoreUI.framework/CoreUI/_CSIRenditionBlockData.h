@interface _CSIRenditionBlockData : NSObject {
    unsigned int _dataPixelFormat;
    int _pixelFormat;
    char *_data;
    unsigned int _nrows;
    unsigned long long _rowbytes;
    _Atomic unsigned long long _imageBytes;
    char _name[128];
    unsigned char _imageBlockReleaseCount;
    unsigned long long _sourceRowbytes;
    unsigned long long _allocationSize;
    unsigned char _allocateMemory : 1;
    unsigned char _mmappedData : 1;
}

- (void)dealloc;

@end
