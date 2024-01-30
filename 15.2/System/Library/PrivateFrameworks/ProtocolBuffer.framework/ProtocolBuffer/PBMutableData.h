@interface PBMutableData : NSMutableData {
    char *p;
    char *buffer;
    char *end;
}

- (void)setLength:(unsigned long long)a0;
- (void *)mutableBytes;
- (unsigned long long)length;
- (const void *)bytes;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;

@end
