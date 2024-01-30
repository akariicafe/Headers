@interface NSInputStream : NSStream {
    unsigned char _reserved[128];
}

@property (readonly) BOOL hasBytesAvailable;

+ (id)inputStreamWithFileAtPath:(id)a0;
+ (id)inputStreamWithData:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)inputStreamWithURL:(id)a0;

- (struct { long long x0; int x1; })_cfStreamError;
- (id)initWithURL:(id)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)_cfTypeID;
- (BOOL)hasBytesAvailable;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;

@end
