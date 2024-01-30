@interface FCRImage : NSObject {
    char *rawDataBuffer;
    char *alignedDataBuffer;
    BOOL freeBufferWhenDone;
}

@property unsigned long long width;
@property unsigned long long height;
@property unsigned long long bytesPerRow;

- (void)dealloc;
- (char *)getAlignedImageData;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 buffer:(char *)a3 freeBufferWhenDone:(BOOL)a4;

@end
