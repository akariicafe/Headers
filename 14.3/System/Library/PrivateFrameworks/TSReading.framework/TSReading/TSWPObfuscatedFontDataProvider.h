@class NSInputStream;

@interface TSWPObfuscatedFontDataProvider : NSObject {
    NSInputStream *_stream;
    unsigned char _xorMask[20];
}

- (void)dealloc;
- (void)rewind;
- (id)initWithPath:(id)a0 groupUID:(id)a1;
- (long long)p_currentOffset;
- (unsigned long long)readBytes:(char *)a0 count:(unsigned long long)a1;
- (long long)skipForwardBy:(long long)a0;

@end
