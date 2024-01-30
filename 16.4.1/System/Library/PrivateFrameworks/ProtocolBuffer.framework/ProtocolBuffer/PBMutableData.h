@interface PBMutableData : NSMutableData {
    char *p;
    char *buffer;
    char *end;
}

- (const void *)bytes;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;
- (unsigned long long)length;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;

@end
