@interface PTPWrappedBytes : NSObject {
    unsigned long long _offset;
    unsigned long long _capacity;
    BOOL _allocatedBytes;
    char *_bytes;
    int _fd;
    BOOL _useByteBuffer;
    unsigned long long _excessDataLength;
    double _progressNotificationTime;
    void /* function */ *_progressNotifier;
    void *_progressNotifierContext;
    int _lastNotifiedProgress;
}

+ (id)wrappedBytesWithBytes:(void *)a0 capacity:(unsigned long long)a1;
+ (id)wrappedBytesWithCapacity:(unsigned long long)a0;

- (unsigned long long)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (const void *)bytes;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;
- (unsigned long long)appendData:(id)a0;
- (unsigned long long)offset;
- (unsigned long long)capacity;
- (unsigned long long)length;
- (id)data;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (unsigned long long)setCapacity:(unsigned long long)a0;
- (id)init;
- (id)description;
- (id)mutableData;
- (unsigned long long)excessDataLength;
- (id)initWithBytes:(void *)a0 capacity:(unsigned long long)a1;
- (id)initWithFileDescriptor:(int)a0 capacity:(unsigned long long)a1;
- (double)percentFull;
- (unsigned long long)rewindBytesToPosition64:(unsigned long long)a0;
- (void)setProgressNotifierCallback:(void /* function */ *)a0 context:(void *)a1;
- (BOOL)wasInitWithFD;

@end
