@interface NSInputStream : NSStream {
    unsigned char _reserved[128];
}

@property (readonly) BOOL hasBytesAvailable;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)inputStreamWithFileAtPath:(id)a0;
+ (id)inputStreamWithData:(id)a0;
+ (id)inputStreamWithURL:(id)a0;

- (struct { long long x0; int x1; })_cfStreamError;
- (unsigned long long)_cfTypeID;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (id)initWithURL:(id)a0;
- (BOOL)hasBytesAvailable;

@end
