@interface REAudioPacket : NSObject {
    void *_bytes;
    unsigned long long _size;
    double _timestamp;
}

- (void)dealloc;
- (id)initWithPacket:(struct RERealTimePacket { unsigned long long x0; double x1; void *x2; } *)a0;

@end
