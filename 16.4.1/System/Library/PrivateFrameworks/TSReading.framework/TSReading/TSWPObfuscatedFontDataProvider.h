@class NSInputStream;

@interface TSWPObfuscatedFontDataProvider : NSObject {
    NSInputStream *_stream;
    unsigned char _xorMask[20];
}

- (void)dealloc;
- (void)rewind;
- (long long)p_currentOffset;
- (id)initWithPath:(id)a0 groupUID:(id)a1;
- (unsigned long long)readBytes:(char *)a0 count:(unsigned long long)a1;
- (long long)skipForwardBy:(long long)a0;

@end
